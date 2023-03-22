#include <stdio.h>

//Quarta Questão
int main() {
    float morango, maca, total;
    float precomorango, precomaca;
    float desconto = 0.0;

    printf("Digite a quantidade de morangos: ");
    scanf("%f", &morango);
    printf("Digite a quantidade de macas: ");
    scanf("%f", &maca);

    
    if (morango <= 5.0) {
        precomorango = 7.5;
    } else {
        precomorango = 5.3;
    }
    if (maca <= 5.0) {
        precomaca = 3.5;
    } else {
        precomaca = 2.8;
    }

    
    total = morango * precomorango + maca * precomaca;

    
    if (total > 19.0 && (morango + maca) < 5.0) {
        desconto = total * 0.08;
        total -= desconto;
    }

    
    printf("O valor a ser pago e de: R$ %.2f\n", total);

    return 0;
}
