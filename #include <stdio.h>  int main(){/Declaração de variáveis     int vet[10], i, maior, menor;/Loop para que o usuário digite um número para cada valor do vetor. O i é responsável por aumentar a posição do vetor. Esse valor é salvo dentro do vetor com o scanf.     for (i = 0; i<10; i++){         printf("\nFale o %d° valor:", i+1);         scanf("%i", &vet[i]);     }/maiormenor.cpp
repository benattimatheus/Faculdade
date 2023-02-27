#include <stdio.h>

int main(){
    //Declaração de variáveis
    int vet[10], i, maior, menor;
    //Loop para que o usuário digite um número para cada valor do vetor. O i é responsável por aumentar a posição do vetor. Esse valor é salvo dentro do vetor com o scanf.
    for (i = 0; i<10; i++){
        printf("\nFale o %d° valor:", i+1);
        scanf("%i", &vet[i]);
    }
    //Maior e menor são declarados como a primeira variável. O loop verifica se o valor é maior do que a primeira váriavel ou menor. Se satisfazer alguma dessas condições, ela é substituída por esse novo valor
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
