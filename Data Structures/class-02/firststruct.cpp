#include <iostream>
#include <ctime>
using namespace std;
typedef struct{
	int x;
	int y;
	
} Math;


bool isPair(int value){
	if(value % 2 == 0) return true;
	else return false;

}

int main(){
	clock_t start = clock();
	Math math;
	math.x = 12;
	math.y = 3;
	std::cout << isPair(math.x) << "\n";
	std::cout << isPair(math.y) << "\n";	
	clock_t end = clock();
	double totalTime = end-start;

        cout << totalTime / CLOCKS_PER_SEC << "\n";

}	
