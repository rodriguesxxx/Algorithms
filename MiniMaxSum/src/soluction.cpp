#include <bits/stdc++.h>
using namespace std;

void miniMaxSum(vector<int> arr) {
    
    sort(arr.begin(), arr.end());
    
    long long minSum = accumulate(arr.begin(), arr.end() - 1, 0LL);
    long long maxSum = accumulate(arr.begin() + 1, arr.end(), 0LL);
    
    cout << minSum << " " << maxSum << endl;
}