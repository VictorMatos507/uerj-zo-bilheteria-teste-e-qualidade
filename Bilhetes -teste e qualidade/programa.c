#include <stdio.h>

float calcularPreco(int idade, int quantidade) {
    if (quantidade > 5) {
        printf("Erro: Número de bilhetes excede o limite permitido.\n");
        return -1;
    }

    float precoUnitario;

    if (idade <= 12) {
        precoUnitario = 10.0;
    } else if (idade >= 13 && idade <= 59) {
        precoUnitario = 30.0;
    } else {
        precoUnitario = 15.0;
    }

    return precoUnitario * quantidade;
}

int main() {
    int idade, quantidade;
    
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    
    printf("Digite a quantidade de bilhetes: ");
    scanf("%d", &quantidade);
    
    float precoTotal = calcularPreco(idade, quantidade);
    
    if (precoTotal != -1) {
        printf("Preço total: R$ %.2f\n", precoTotal);
    }

    return 0;
}