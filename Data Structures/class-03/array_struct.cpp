#include <iostream>
#include <malloc.h>

using namespace std;

int main(){

	int x[3];
	x[0] = 3;
	x[1] = 2;
	x[2] = 3;
	
	cout << "Array x:" << "\n";
	cout << x[0] << "\n";
        cout << x[1] << "\n";
        cout << x[2] << "\n";	

	int* y = (int*) malloc( sizeof(int) * 4); //quero armazenar 3 valores inteiros, entao pego o tamanho de um int e mutiplico por 3

	y[0] = 1;
	y[1] = 2;
	y[2] = 3;
	
	cout << "Array y:" << "\n";
	cout << y[0] << "\n";
	cout << y[1] << "\n";
	cout << y[2] << "\n";	

	*y = *x;

	cout << "Array x clonado em y:" << "\n";
        cout << y[0] << "\n";
        cout << y[1] << "\n";
        cout << y[2] << "\n"; 
}


