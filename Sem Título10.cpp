#include <stdio.h>

//Decima Questão
int main() {
    float celsius, fahrenheit;
    int i;

    printf("Tabela de conversao de graus Celsius para Fahrenheit:\n");
    printf("Celsius\tFahrenheit\n");

    for (i = 50; i <= 65; i++) {
        celsius = i;
        fahrenheit = (celsius * 9/5) + 32;

        printf("%.1f\t%.1f\n", celsius, fahrenheit);
    }

    return 0;
}
