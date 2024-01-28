#include <vector>
#include <iostream>
#include <random>
using namespace std;

vector<int> shuffle(vector<int> arr) {    

    static mt19937 generator(42);

    vector<int> shuffledArr;


    while(!arr.empty()) {
        uniform_int_distribution<size_t> normalizer(0, arr.size() - 1);
        auto i = arr.begin() + normalizer(generator);
        shuffledArr.push_back(*i);
        arr.erase(i);
    }

    return shuffledArr;

}

bool isOrdened(vector<int>& arr) {
    for(int i = 0; i < arr.size() - 1; ++i) {
        if(arr[i+1] < arr[i]) {
            return false;
        }
    }
    return true;
}

void bogoSort(vector<int>& arr) {
    
    while(!isOrdened(arr)) {
        arr = shuffle(arr);
    }

    for(int v : arr) {
        cout << v << " ";
    }
    
    cout << endl;
}

int main() {
    vector<int> arr = {5, 2, 4, 1, 3};
    bogoSort(arr);
    return 0;
}