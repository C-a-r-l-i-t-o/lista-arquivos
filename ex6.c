#include <stdio.h>
#include <stdlib.h>
/* 
Faca um programa que leia um valor n e crie dinamicamente um vetor de n elementos
e passe esse vetor para uma funcao que vai ler os elementos desse vetor. Depois, no
programa principal, o vetor preenchido deve ser impresso. Alem disso, antes de finalizar
o programa, deve-se liberar a  ́area de memoria alocada.
*/
int vetor(){
    int *p,i,v;
    p = (int *) malloc(50*sizeof(int));
    if(p == NULL){

    printf("Erro: Memoria Insuficiente!\n");
    system("pause");
    return 1;
    }

    for (i = 0; i < 50; i++){
    p[i] = i+1;
    }
    free(p);

    return v;
}
int main(){
    int i;
    int *p;
    int v;

    for (i = 0; i < 50; i++){
    printf("%d\n",p[i]);
    }

    
    
    free(p);
    system ("pause");
    return 0;
}