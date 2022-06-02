#include <stdio.h>
#include <stdlib.h>

/*
 Escreva um programa que:
    Crie/abra um arquivo texto de nome “arq.txt”
    Permita que o usuario grave diversos caracteres nesse arquivo, 
    ate que o usuario entre com o caractere ‘0’
*/

int main (){

    char string;
    int i = 0;

        FILE* arquivo;
        arquivo = fopen("arquivo.txt","wb");
        if(arquivo == NULL){
        printf("Erro ao abrir o arquivo.\n");
            return 1;}

        arquivo = fopen("arquivo.txt", "wb");

        while(!feof(arquivo)){
            scanf("%c", &string);
                if(string == '0'){

                    fprintf(arquivo, "%c", string);
                }

                    
        }

                fclose(arquivo);

    system("pause");
    return 0;
}