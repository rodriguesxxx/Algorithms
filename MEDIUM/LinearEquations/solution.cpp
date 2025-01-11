#include<iostream>
#include<vector>

using namespace std;

struct LinearEquation {
    int a1, b1, a2, b2, r1, r2;
};

int calc_determinant(const int a1, const int b1, const int a2, const int b2) {
    const int d = a1 * b2 + (a2 * b1) * -1;

    return d;
}

vector<int> solve_systeam(const LinearEquation &eq) {

    const int D = calc_determinant(eq.a1, eq.b1, eq.a2, eq.b2);
    const int Dx = calc_determinant(eq.r1, eq.b1, eq.r2, eq.b2);
    const int Dy = calc_determinant(eq.a1, eq.r1, eq.a2, eq.r2);

    const int X = Dx / D;
    const int Y = Dy / D;

    const vector<int> s = {X, Y};

    return s;
}

int main() {

    const LinearEquation eq = {2, 1, 1, 3, 10, 15};

    const vector<int> sXY = solve_systeam(eq);

    cout << "x = " << sXY[0] << endl;
    cout << "y = " << sXY[1] << endl;
    
    return 0;
}