#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Criar um tipo abstrato de dados que represente uma pessoa, contendo nome, data de
nascimento e CPF. Crie uma variavel que e um ponteiro para este TAD (no programa
principal). Depois crie uma funcao que receba este ponteiro e preencha os dados da
estrutura e tambem uma uma funcao que receba este ponteiro e imprima os dados da
estrutura. Finalmente, faca a chamada a esta funcao na funcao principal.
*/
struct dados {
    char name[99];
    int data;
    float cpf;    


};
void *TAD(struct dados p){
    int i ,j ,k ;

    for(i = 0; i <= p.name; i++){
    printf("Escreva o nome = %s\n", p.name);
    }

    for(j = 0; j <= p.data; j++){
    printf("Entre com a data= %d\n", p.data);}

    for(k = 0; k <= p.cpf; k ++){
    printf("Entre com o numero do cpf= %f\n", p.cpf);}
    
    getchar();
}

 

int main(){
    struct dados Dados;
    *TAD;
    int ptr;

    ptr = &TAD;
    printf(" %p", ptr);

    getchar();
    system("pause");
    return 0;
}