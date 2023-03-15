#include <stdio.h>

int main() {
    int i, j;
    int matriz[7][7];

    for(i = 0; i < 7 ; i++) {
        for(j = 0; j < 7 ; j++) {
	    	if ( i == j){
	    		matriz[i][j] = 1;
			}
			else{
				matriz[i][j] = 0;
			}
		}
	}
	
	printf("\n Diagonal Principal\n");
    for(i = 0; i < 7 ; i++) {
        for(j = 0; j < 7 ; j++) {
			printf("%d ", matriz[i][j]);
			printf("\t");
		}
		printf("\n");
	}
	

}
