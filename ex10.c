#include <stdio.h>
#include <stdlib.h>

/* Faca um programa que receba do usuario um arquivo texto e mostre na tela quantas
letras sao vogais e quantas sao consoantes.*/

    struct arq {

     FILE *ptr_arq;
     int consoante;
     int vogais;
     };

int main(){
    struct arq arquivo;

    
     arquivo.ptr_arq = fopen("arquivo.txt", "r");

        //condicao de parada caso ocorra erro.
     if(arquivo.ptr_arq == NULL){
         printf("Erro no arquivo!");
         return 1;
        }

    while(!feof(arquivo.ptr_arq)){
        
        if(getc(arquivo.ptr_arq)=='a','A','e','E','i','I','o','O','u','U'){
        arquivo.vogais++;
            }else ((arquivo.ptr_arq) != 'a','A','e','E','i','I','o','O','u','U'); {  
        arquivo.consoante++ ;}
    }
    
    printf("A quantidade de vogais no arquivo: %d\n, consoantes: %d\n", arquivo.vogais, arquivo.consoante);



     fclose(arquivo.ptr_arq);

    
    system("pause");
    return 0;
}