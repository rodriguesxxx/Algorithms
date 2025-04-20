#include<iostream>
#include<sstream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
    string line;
    vector<int> Ni;
    int x, n, r = 0;
    
    getline(cin, line);
    cin >> x;

    istringstream iss(line); 
    while(iss >> n) {
        Ni.push_back(n);
    }

    sort(Ni.begin(), Ni.end());
    while(x > 0 && x >= Ni[r]) {
        x -= Ni[r];
        r++; 
    }

    cout << r << endl;

    return 0;
}