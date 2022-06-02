#include <stdio.h>
#include <stdlib.h>


/*Faca um programa que receba do usuario um arquivo texto e mostre na tela quantas
letras s ̃ao vogais.*/

struct param{
     FILE *ptr_arq;
     int beta;
     int alfa;
     int let;

};
int main(){
    
    struct param letras;

    char vet[10] = {'a','A','e','E','i','I','o',' O','u','U'};
    char vet2[13] = {' ','-','\n','0','1','2','3','4','5','6','7','8','9'};


     letras.ptr_arq = fopen("arquivo.txt", "r");

     if(letras.ptr_arq == NULL){
         printf("Erro no arquivo!");
         return 1;
     }

    while(feof(letras.ptr_arq)== 0){

          /*leitura feita caractere por caractere*/
        letras.let = getc(letras.ptr_arq);
		/*contagem das vogais*/
        if(letras.let == vet[10]){
            letras.beta ++;
			/*contagem das consoantes*/
        }else if(letras.let != vet2[13])
                letras.alfa ++;
        printf("%c \n",letras.let);

    
    printf("\nArquivo tem:\n %d vogais\n %d consoantes\n", letras.beta, letras.alfa);
    
    }
     fclose(letras.ptr_arq);

    
    system("pause");
    return 0;
}