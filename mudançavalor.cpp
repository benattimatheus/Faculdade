#include <stdio.h>
#define TAM 3

int main(){
	int mat[TAM][TAM], i, j, aux;
	
	for(i=0; i<TAM; i++){
		for(j=0; j<TAM; j++){
			printf("Digite um valor: \n");
			scanf("%d", &mat[i][j]);
		}
	}
	
	for(i=0; i<TAM; i++){
		for(j=0; j<TAM; j++){
			aux = mat[i][j];
			if (aux % 2 == 0){
				mat[i][j]++; //= aux + 1;
			}
			else{
				mat[i][j]--; //= aux - 1;
			}
		}
	}
	
	for(i=0; i<TAM; i++){
		for(j=0; j<TAM; j++){
			printf("\t %d", mat[i][j]);
		}
		printf("\n");
	} 
	
	
}

