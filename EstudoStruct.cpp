include <stdio.h>

typedef struct{
    float Peso;
    int Idade;
    float Altura;
}pessoa;

void imprimir(pessoa p){
    printf("Peso: %.2f\n", p.Peso);
    printf("Idade: %d\n", p.Idade);
    printf("Altura: %.2f\n", p.Altura);
}

int main(){
    
    pessoa ficha_pessoal;
    printf("Diga o peso: \n");
    scanf("%f", &ficha_pessoal.Peso);
    printf("Diga a idade: \n");
    scanf("%d", &ficha_pessoal.Idade);
    printf("Diga a altura: \n");
    scanf("%f", &ficha_pessoal.Altura);
    
    imprimir(ficha_pessoal);
    
}
