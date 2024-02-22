#include "load.h"


FILE* loadFile(){

    FILE* f;

    char name[50];
    printf("Digite o nome do arquivo de teste: ");
    scanf("%*c%[^\n]%*c", name);

    f = fopen(name, "r");

    if(f == NULL) printf("O arquivo nao foi encontrado\n");

    return f;
}

