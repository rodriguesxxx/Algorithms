#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;


int birthdayCakeCandles(vector<int> candles) {
    int max_value = 0;
    int sum_max_value = 0;
    for_each(candles.begin(), candles.end(), [&max_value, &sum_max_value](int candle){

        if(max_value == candle) {
            sum_max_value += max_value;
        }

        if(candle > max_value) {
            max_value = candle;
            sum_max_value = max_value;
        }

    });
    
    return sum_max_value / max_value;
}

int main() {

    vector<int> candles = {3, 2, 1, 3};
    cout << birthdayCakeCandles(candles) << endl;
    return 0;
}