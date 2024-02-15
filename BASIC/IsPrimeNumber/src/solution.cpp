#include <iostream>
using namespace std;

//complexity: O(1)

bool isPrimeNumber(int number) {
    if((number % 2 != 0 && number % 3 != 0) || number == 2 || number == 3) 
        return true;
    return false;
}

int main() {
    int n;
    cin >> n;
    if(isPrimeNumber(n)) cout << "yes" << endl;
    else cout << "no" << endl;
}