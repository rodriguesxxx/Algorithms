#include <iostream>
#include <malloc.h>
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
	

	Math* math = (Math*) malloc(sizeof(Math)); //oq esta  acontecendo aqui?
		/*
			* O malloc aloca a memoria de forma dinamica
			* O sizeof ira retornar o quanto de memoria precisa ser alocada, e o malloc alocara.
			* dessa forma otimizamos nosso codigo a alocar apenas o necessario.
		*/

	math->x = 22;
	math->y = 3;	

	std::cout << isPair(math->x) << "\n";
	std::cout << isPair(math->y) << "\n";

	;

	clock_t end = clock();

	double totalTime = end-start;

	cout << totalTime / CLOCKS_PER_SEC << "\n";
}

