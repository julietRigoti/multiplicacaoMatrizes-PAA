#include <stdio.h>

int menu(){

    printf("Escolha uma opcao:\n");
    printf("1 - Teste de Matriz Tradicional\n");
    printf("2 - Teste de Matriz por Strassen\n");
    printf("3 - Teste Problema da Mochila Binaria\n");
    printf("0 - Sair\n");

    int op;

    scanf("%d", &op);

    return op;
}
