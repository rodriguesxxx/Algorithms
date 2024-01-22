#include <iostream>
using namespace std;

void staircase(int n) {
    for(int row = 0; row < n; row++) {
        
        for (int space = 0; space < (n - row ) - 1; space++) {
            cout << " ";
        }
        
        for(int column = 0; column <= row; column++){
            cout << "#";
        }
        cout << endl;
    }
}