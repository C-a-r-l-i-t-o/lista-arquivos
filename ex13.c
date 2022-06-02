#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 
Faca um programa que receba do usuario um arquivo texto. Crie outro arquivo texto
contendo o texto do arquivo de entrada, mas com as vogais substituıdas por ‘*’
*/

struct letras{
    FILE *ptr, *point;


};

int main(){
    struct letras altern;

    char vet[13] = {'a','A','e','E','i','I','o','O','u','U'};
    char aux;
    char v['*'];
    
    altern.ptr = fopen("arq.txt", "r");
    if(altern.ptr == NULL){
        printf("Erro na leitura do arquivo.");
        return 1;
    }
	 
    altern.point = fopen("arq2.txt", "w");
    if(altern.ptr == NULL){
        printf("Erro na escrita do arquivo.");
        return 1;
    }
    
    while(feof(altern.ptr) == 0){
        
        aux = getc(altern.ptr);
		
        if(aux || vet[13]){
            aux = '*';
            fprintf(altern.point,"%c", aux);
			
        }else if(aux != v['*'])
            fprintf(altern.point,"%c", aux);


    }
    fclose(altern.ptr);
    fclose(altern.point);

    system("pause");
    return 0;
}