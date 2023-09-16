#include <iostream>
#include <malloc.h>

int main(){

	int* y = (int*) malloc(sizeof(int));

	std::cout << y << "\n";

	*y = 20;

	std::cout << *y << "\n"; //o valor armazenado em y agora é 20, antes era uma referencia;

	int z = sizeof(int);

	std::cout << z;

	

}
