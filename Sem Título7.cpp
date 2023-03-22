#include <stdio.h>

//Setima Questão
int main() {
    float peso, altura, imc;

    printf("Digite o peso: ");
    scanf("%f", &peso);
    printf("Digite a altura: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("Seu IMC e: %.2f\n", imc);

    if (imc < 18.5) {
        printf("Abaixo do peso\n");
    } else if (imc < 25) {
        printf("Peso normal\n");
    } else if (imc < 30) {
        printf("Sobrepeso\n");
    } else if (imc < 35) {
        printf("Obesidade grau 1\n");
    } else if (imc < 40) {
        printf("Obesidade grau 2\n");
    } else {
        printf("Obesidade grau 3\n");
    }

    return 0;
}
