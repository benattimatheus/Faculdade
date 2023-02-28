#include <stdio.h>

int main(){
    
    int vet[10], i, maior, menor;
   
    for (i = 0; i<10; i++){
        printf("\nFale o %d° valor:", i+1);
        scanf("%i", &vet[i]);
    }
    
    maior = vet[0];
    menor = vet[0];
    for (i=0; i<10; i++){
        if (vet[i] > maior){
            maior = vet[i];
        }
        else 
         if (vet[i] < menor){
            menor = vet[i];
        }
        
    }
    
    printf("O maior valor é: %i", maior);
    printf("\nO menor valor é: %i", menor);
    
    return (0);
}
