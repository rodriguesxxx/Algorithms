#include <vector>
#include <iostream>

using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> arr;

    for(int i = 0; i < n; i++) {
        int val;
        cin >> val;
        arr.push_back(val);
    }

    int lowestNumber = arr[0];
    int position = 0;

    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] < lowestNumber) {
            lowestNumber = arr[i];
            position = i;
        }
    }

    cout << "Menor valor: " << lowestNumber << endl;
    cout << "Posicao: " << position << endl;

    return 0;
}