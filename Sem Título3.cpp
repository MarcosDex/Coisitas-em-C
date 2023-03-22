#include <stdio.h>

//Terceira Questão
int main() {
    int number;

    printf("Digite um numero: ");
    scanf("%d", &number);

    if (number % 2 == 0) {
        printf("O numero %d e par", number);

        if (number > 15) {
            printf(" e maior que 15.");
        } else {
            printf(" e menor ou igual a 15.");
        }
    } else {
        printf("O numero %d  e impar", number);

        if (number < 50) {
            printf(" e menor que 50.");
        } else {
            printf(" e maior ou igual a 50.");
        }
    }


    return 0;
}
