#include <iostream>
using namespace std;



int main() {

    int sumMultiples = 0;

    for(int i  = 0; i < 1000; i += 3) {
        sumMultiples += i;
    }

    for(int i  = 0; i < 1000; i += 5) {
        sumMultiples += i;
    }

    cout << sumMultiples << endl;

    return 0;
}