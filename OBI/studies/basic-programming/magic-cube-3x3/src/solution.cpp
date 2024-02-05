#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int sumOfColumn(vector<int>& column) {
    int sum = 0;
    for_each(column.begin(), column.end(), [&sum](int value){
        sum+=value;
    });
    return sum;
}

int sumOfRow(vector<vector<int>>& square) {
    int sum = 0;
    
}

bool isMagicSquare(vector<vector<int>>& square) {
    
    //validation of the sum of the columns
    bool isValidatedColumnSum;
    int oldSum = 0;
    for(vector<int> column : square) {
        int sum = sumOfColumn(column);
        if(oldSum == sum) isValidatedColumnSum = true;
        else isValidatedColumnSum = false;
        oldSum = sum;
    }
    return isValidatedColumnSum;
}

int main() {
    vector<vector<int>> square = {{2,7,6}, {9,5,1}, {4,3,8}};
    cout << isMagicSquare(square) << endl;
    return 0;
}