#include <iostream>

int  main(){
	int x = 22;
	int* y = &x; 
		// int* significa que o valor de y sera uma referencia.
		// &x é a referencia que aponta para o valor de x(no caso 22)
		//isso significa que x e y apontam para a mesma referencia.
	
	std::cout << x << "\n" << *y << "\n"; //*y acessa o valor da referencia, no caso o valor de x
	
	*y = 12; // agora x vale 12

	std::cout << x << "\n"; 
}	
