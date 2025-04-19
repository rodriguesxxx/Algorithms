#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> columnSums(vector<vector<int>>& square) {
    vector<int> sums;
    for(int i = 0; i < square.size(); i++) {
        int sum = 0;
        for(int j = 0; j < square.size(); j++) {
            sum+=square[j][i];
        }
        sums.push_back(sum);
    }
    return sums;
}

vector<int> rowSums(vector<vector<int>>& square) {
    vector<int> sums;
    for(int i = 0; i < square.size(); i++) {
        int sum = 0;
        for(int j = 0; j < square.size(); j++) {
            sum+=square[i][j];
        }
        sums.push_back(sum);
    }
    return sums;

}


//TODO: FIX: corrigir erro logico na validacao
bool isValidSums(vector<int> sums) {

    int total_sum = 0;
    for(int sum : sums) {
        total_sum += sum;
    }

    int avg = total_sum / sums.size();
    if(avg == sums[0]) {
        return true;
    }
    return false;

}

bool isMagicSquare(vector<vector<int>>& square) {

    vector<int> sumOfRows = rowSums(square);
    vector<int> sumOfColumns = columnSums(square);
    if(isValidSums(sumOfColumns) && isValidSums(sumOfRows)) {
        return true;
    }
    return false;
}

int main() {
    vector<vector<int>> square = {{2,7,6}, {9,5,1}, {4,3,8}};
    cout << isMagicSquare(square) << endl;
    return 0;
}