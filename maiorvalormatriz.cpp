#include <stdio.h>

int mat[4][4], i, j, maior, l, c;

int main(){
	for (i=0; i<4; i++){
		for(j=0; j<4; j++){
			printf("\nInsira um valor: ");
			scanf("%d", &mat[i][j]);
		}
	}
	
	maior = mat[0][0];
	
	for (i=0; i<4; i++){
		for(j=0; j<4; j++){
			if(maior < mat[i][j]){
				maior = mat[i][j];
				l = i;
				c = j;
			}
		}
	}
	
	printf("\nO maior valor foi %d na posiçao linha %d e coluna %d", maior, l, c);
	
}
