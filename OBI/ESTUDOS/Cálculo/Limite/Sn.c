#include<stdio.h>
#include<math.h>

long double Sn(long long n) {
    return 1.0 - 1.0 / (n + 1);
}

void call_Sn() {
    const int N_CALL = 12;

    for(int call = 1; call <= N_CALL; call++) {
        printf("10^%d -> %.12Lf\n", call, Sn(pow(10, call)));
    }

}

int main() {
    call_Sn();
    
    return 0;
}
