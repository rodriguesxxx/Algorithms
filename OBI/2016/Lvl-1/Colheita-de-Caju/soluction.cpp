#include <vector>
#include <iostream>
using namespace std;

//
// Created by rodriguesxxx on 26/01/24.
//


int calcularColheitaMaximaDeCajus(vector<vector<int>>& cajus, int linhasColheita, int colunasColheita) {
    int colheita_maxima = 0;
    for(int i = 0; i <= cajus.size() - linhasColheita; i++) {
        for(int j = 0; j <= cajus.size() - colunasColheita; j++) {
            int colheita_atual = 0;

            //calcula a colheita atual
            for(int x = i; x < i + linhasColheita; x++) {
                for(int y = j; y < j + colunasColheita; y++) {
                    colheita_atual += cajus[x][y];
                }
            }

            colheita_maxima = max(colheita_maxima, colheita_atual);
        }
    }
    return colheita_maxima;
}

int main() {
    vector<vector<int>> cajus = {
            vector<int>{1, 2, 3, 4},
            vector<int>{5, 6, 7, 8},
            vector<int>{1, 10, 5, 2},
            vector<int>{1, 5, 9, 10},
    };

    cout << calcularColheitaMaximaDeCajus(cajus, 2, 1) << endl;

    return 0;
}