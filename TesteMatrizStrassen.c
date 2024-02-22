#include "MatrizStrassen.h"


//Inicia um teste do algoritmo de Strassen
void TesteStrassen()
{
	int n;

		n = GenerateMatrixes();

		printf("Multiplicando...\nResultado:\n\n");
		C = strassenMultiply(A, B, n);

		printMatrix(C, n);



}
