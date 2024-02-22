#include "TesteKnapSack.h"
#include "load.h"

#define MAX 100

//Le as variaveis do problema no arquivo f
int readKnapSack(FILE* f, int w[], int v[], int *n){

    int W;

    fscanf(f, "%d\n", &W);


    fscanf(f, "%d\n", n);


    for(int i = 1; i <= *n; i++){
        fscanf(f, "%d %d\n", &w[i], &v[i]);

    }
    return W;
}


//Inicia teste do algoritmo 0-1 KnapSack
void TesteKnapSack()
{


    FILE* f = loadFile();

    int w[MAX];
    int v[MAX];
    int itens;

    int W = readKnapSack(f, w, v, &itens);

    fclose(f);

    printf("\n\nCapacidade: %d\n\n", W);


    printf("Numero de itens: %d\n\n", itens);

    for(int i = 1; i <= itens; i++){
        printf("Item %d\n", i);
        printf("    Peso: %d Valor: %d\n", w[i], v[i]);

    }
    printf("\n\n");

    int res[itens+1];

    mochila(w, v, W, res, itens+1);

    printf("\n");

    printf("Itens inclusos na mochila: \n");
    for(int i = 1; i < itens+1; i++){

        printf("%d ", i);

    }
    printf("\n");
    for(int i = 1; i < itens+1; i++){

        printf("%d ", res[i]);

    }

    printf("\n\n");

}
