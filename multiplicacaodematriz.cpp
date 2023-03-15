#include <stdio.h>

int mat[4][4], i, j;

int main(){
	for (i=0; i<4; i++){
		for (j=0; j<4; j++){
			mat[i][j] = i*j;
		}
	}
	
	for (i=0; i<4; i++){
		printf("\n");
		for (j=0; j<4; j++){
			printf(" %d", mat[i][j]);
		}
	}
	
}
