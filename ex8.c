#include <stdio.h>
#include <stdlib.h>

/*Faca um programa que receba do usu ́ario um arquivo texto e mostre na tela quantas
linhas esse arquivo possui*/

    struct arq {

     FILE *ptr_arq;
     int line;
     };

int main(){
    struct arq arquivo;

    arquivo.line = 0;
    
     arquivo.ptr_arq = fopen("arquivo.txt", "r");

        //condicao de parada caso ocorra erro.
     if(arquivo.ptr_arq == NULL){
         printf("Erro no arquivo!");
         return 1;
        }

    while(!feof(arquivo.ptr_arq)){

        if(getc(arquivo.ptr_arq)=='\n')
        arquivo.line++;
    }
    printf("A quantidade de linhas no arquivo: %d .\n", arquivo.line);



     fclose(arquivo.ptr_arq);

    
    system("pause");
    return 0;
}