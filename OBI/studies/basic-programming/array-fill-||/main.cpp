#include <iostream>
using namespace std;

int main() {

    int n;
    cin >> n;

    for(int i = 0; i < 1000;) {
        for(int j = 0; j < n && i < 1000; ++j) {
            cout << "N[" << i << "] = " << j << endl;
            ++i;
        }
    }

    return 0;
}
