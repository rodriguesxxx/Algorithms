#include <iostream>
#include <vector>

using namespace std;

std::vector<int> countBy(int x,int n){
  std::vector<int> multiples;
  for(int i = 1; i < n+1; i++) {
    multiples.push_back(i * x);
  }
  return multiples;
}
int main() {
    countBy(2, 5);
    return 0;
}