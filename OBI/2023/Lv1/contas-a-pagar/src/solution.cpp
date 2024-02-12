#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int valor_total;
    vector<int> contas(3);
    cin >> valor_total;
    
    for(int i = 0; i < contas.size(); i++) {
        cin >> contas[i];
    }

    sort(contas.begin(), contas.end());

    int contasPagas = 0;

    for(int conta : contas) {
        if(valor_total > 0 && valor_total >= conta) {
            valor_total -= conta;
            contasPagas++;
        }
    }

    cout << contasPagas << endl;

    return 0;
}