#include <stdio.h>
#include <stdlib.h>

/*
Crie funcoes para imprimir os elementos de vetor. Para varrer o vetor, nao utilize ındices,
use apenas aritmetica de ponteiros. Faca isto para os vetores de inteiros e de reais.

*/

int main(){

     int *ptr,i;
    ptr = (int *) malloc(999*sizeof(int));
    if(ptr == NULL){

    printf("Erro na alocacao de memoria!\n");
    system("pause");
    return 1;
    }

    for (i = 0; i < 999; i++){
    ptr[i] = i+1;
    }
    free(ptr);

    for (i = 0; i < 99; i++){
    printf("%d\n",ptr[i]);
    }


    system ("pause");
    return 0;
}