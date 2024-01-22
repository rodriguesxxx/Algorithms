#include <vector>
#include <algorithm>
#include <iomanip>
#include <iostream>
using namespace std;

void plusMinus(vector<int> arr) {
    vector<vector<int>> filteredNumbers(3);

    for (int i = 0; i < arr.size(); i++) {
        copy_if(arr.begin(), arr.end(), back_inserter(filteredNumbers[i]), [i](int num) {
            switch(i) {
                case 0:
                    return num > 0;
                case 1:
                    return num < 0;
                case 2:
                    return num == 0;
                default:
                    return false;
            }
        });
    }

    cout << fixed << setprecision(arr.size());
    
    for_each(filteredNumbers.begin(), filteredNumbers.end(), [arr](vector<int> nums) {
        cout << (float)nums.size() / arr.size() << endl;
    });
}
    
int main() {
    plusMinus({-4, 3, -9, 0, 4, 1});
    return 0;
}