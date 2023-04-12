#include <stdio.h>
#include <time.h>
#include <cstdlib>
#include <ctime>

int i, j, n, aux;

int main(){
    printf("Informe o valor de n: ");
    scanf("%d", &n);
    
    int matriz[n][n];
    
    srand(time(0));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matriz[i][j] = rand() % 100; 
        }
    }
    
    printf("Matriz gerada:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    int vetor[n * n];
    int k = 0;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            vetor[k++] = matriz[i][j];
        }
    }
    
    for (int i = 0; i < n * n - 1; i++) {
        for (int j = 0; j < n * n - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                int aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }

    
    printf("Vetor ordenado:\n");
    for (i = 0; i < n * n; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
    
}
