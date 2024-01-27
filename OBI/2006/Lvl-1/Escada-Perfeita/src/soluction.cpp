//
// Created by rodriguesxxx on 27/01/24.
//
#include <bits/stdc++.h>
using namespace std;

int pilhasAlteradas(vector<int>& escada) {

    sort(escada.begin(), escada.end());

    int tamanhoEscada = escada.size();
    int resto = 0;
    int movimentos = 0;
    int degraus = 0;
    for_each(escada.begin(), escada.end(), [&degraus](int degrau){
        degraus+=degrau;
    });

    int degrauFinal =  ((degraus * 2 / tamanhoEscada) + tamanhoEscada - 1) / 2;
    int degrauInicial = degrauFinal - tamanhoEscada + 1;

    for(int i = 0; i < tamanhoEscada; i++) {
        if(escada[i] > degrauInicial + i) {
            movimentos+=escada[i]-(degrauInicial+i);
        }
    }

    cout << movimentos << endl;


    return 0;
}

int main() {
    vector<int> escada = {5, 4, 5, 4, 2};
    pilhasAlteradas(escada);
    return 0;
}