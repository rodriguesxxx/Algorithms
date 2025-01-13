#include<iostream>
#include<vector>
#include<string>
#include<sstream>
#include<cctype>
#include<algorithm>

using namespace std;

struct LinearEquation {
    float a1 = 0, b1 = 0, r1 = 0, a2 = 0, b2 = 0, r2 = 0;
};

void process_expression(const string &expression, float &coefX, float &coefY, float &res) {
    coefX = coefY = 1;

    istringstream stream(expression);
    string term;
    char var = '\0';
    int last_sign = 1;
    bool can_set_res = false;

    while(stream >> term) {
        
        term.erase(remove(term.begin(), term.end(), ' '), term.end());

        int sign = (term[0] == '-') ? -1 : 1;
        
        if(term[0] == '+' || term[0] == '-') last_sign = sign;

        if(can_set_res) {
            res = stoi(term);
            return;
        }

        size_t index = term.find_first_of("xy=");
        if(index != string::npos) {
            var = term[index];

            if(index > 1) last_sign = 1;

            string __coef = term.substr(0, index);

            float coef = __coef.empty() ? 1 : stof(__coef);
            coef*=last_sign;

            if(var == 'x') {
                coefX = coef;
            } else if(var == 'y') {
                coefY = coef;
            } else if(var == '=') {
                can_set_res = true;
            }
         }
    }
}

float calc_determinant(const float a1, const float b1, const float a2, const float b2) {
    const float d = a1 * b2 + (a2 * b1) * -1;

    return d;
}

vector<float> solve_systeam(const LinearEquation &eq) {

    const float D = calc_determinant(eq.a1, eq.b1, eq.a2, eq.b2);
    const float Dx = calc_determinant(eq.r1, eq.b1, eq.r2, eq.b2);
    const float Dy = calc_determinant(eq.a1, eq.r1, eq.a2, eq.r2);

    const float X = Dx / D;
    const float Y = Dy / D;

    const vector<float> s = {X, Y};

    return s;
}

int main() {

    LinearEquation eq;
    
    string exp1, exp2;
    cout << "l1 (ex: 2x + y = 10): ";
    getline(cin, exp1);

    cout << "l2 (ex: x + 3y = 15): ";
    getline(cin, exp2);

    process_expression(exp1, eq.a1, eq.b1, eq.r1);
    process_expression(exp2, eq.a2, eq.b2, eq.r2);

    const vector<float> sXY = solve_systeam(eq);

    cout << "x = " << sXY[0] << endl;
    cout << "y = " << sXY[1] << endl;
    
    return 0;
}