#include <stdio.h>
#define TAM 3

int main(){
	int mat[TAM][TAM], i, j, soma = 0, somad = 0;
	
	for(i=0; i<TAM; i++){
		for(j=0; j<TAM; j++){
			printf("Digite um valor: \n");
			scanf("%d", &mat[i][j]);
		}
	}
	
	for(i=0; i<TAM; i++){
		for(j=0; j<TAM; j++){
			soma = soma + mat[i][j];
		}
	}
	
	for(i = 0; i < TAM ; i++) {
    	for(j = 0; j < TAM ; j++) {
	   		if (i == j){
	   			somad = somad + mat[i][j];
			}
		}
	}
	
	for(i=0; i<TAM; i++){
		for(j=0; j<TAM; j++){
			printf("\t %d", mat[i][j]);
		}
		printf("\n");
	}
		
	printf("O valor total é %d e o valor da diagonal é %d", soma, somad);
}
