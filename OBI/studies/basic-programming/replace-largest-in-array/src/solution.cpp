#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> replaceMatrix(vector<vector<int>>& arr) {
    int max_value = 0;
    
    for(int i = 0; i < arr.size(); ++i) {
        for(int j = 0; j < arr.size(); ++j) {
            if(arr[i][j] > max_value) {
                max_value = arr[i][j];
            }
        }
    }

    for(int i = 0; i < arr.size(); ++i) {
        for(int j = 0; j < arr.size(); ++j) {
            if(arr[i][j] == max_value) {
                arr[i][j] = -1;
            }
        }
    }

    return arr;
} 

int main() {

    const int VECTOR_SIZE = 3;
    vector<vector<int>> arr(VECTOR_SIZE, vector<int>(VECTOR_SIZE));

    for(int i = 0; i < VECTOR_SIZE; ++i) {
        for(int j = 0; j < VECTOR_SIZE; ++j) {
            cin >> arr[i][j];
        }
    }

    replaceMatrix(arr);

    for(vector<int> v : arr) {
        for(int i : v) {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}