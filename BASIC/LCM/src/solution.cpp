#include<iostream>
using namespace std;

bool isPrime(int n) {
    if(n % 2 != 0 && n % 3 != 0 || n == 2 || n ==3) {
        return true;
    }
    return false;
}

int main() {
    return 0;
}