/* Código para ordenar números aleatórios em ordem crescente e evitar repetições */

#include <stdio.h>
#include <time.h>
#define TAM 10
#include <cstdlib>
#include <ctime>

int main(void) {
    int i, j, igual;
    float vet[TAM], aux;
    
	srand(time(0));
	
	printf("\n -------- Vetor Sorteado -------------\n");
    do{
        vet[i] = rand() % 50; 
        igual = 0;
        for(j = 0; j < i; j++){
            if(vet[j] == vet[i])
                igual = 1;
        }

        if(igual == 0) 
            i++;
    }while(i < 10); 
    
    for(i = 0; i < 10; i++){
        printf("\n%2.f", vet[i]);
    }
    
    for(i=0; i<TAM; i++) {
		for (j= 0; j < TAM; j++){
			if(vet[i] < vet[j]){
			  aux = vet[i];
				vet[i] = vet[j];
				vet[j] = aux;
			}
		}
    }
	
	printf("\n ---- Vetor Ordenado -------------\n");    
    for (int x=0; x < TAM; x++){
    	printf("\n %2.f ", vet[x]);
	} 

    return 0;
}
