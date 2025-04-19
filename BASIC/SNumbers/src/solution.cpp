#include<iostream>
#include<sstream>
#include<string>
#include<vector>
using namespace std;

int sum(const vector<int>& seq) {
    return (seq.front() + seq.back()) * seq.size() / 2;
}

int main() {
    string line;
    vector<int> sequence;
    int n;

    getline(cin, line);

    istringstream iss(line);
    while(iss >> n) {
        sequence.push_back(n);
    }

    cout << sum(sequence) << endl;

    return 0;
}