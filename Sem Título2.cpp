#include <stdio.h>
#include <math.h>

//Segunda Quest�o
int main() {
	float number1,number2,soma,sub,prod,median,quartesecond,quadradodoprimeiro,modulodoprimeiro;
	
	printf("Digite um numero: ");
	scanf("%f", &number1);
    printf("Digite outro numero: ");
	scanf("%f", &number2);
	
	soma = number1 + number2;
	sub = number1 - number2;
	prod = number1 * number2;
	median = (number1 + number2) / 2;
	quartesecond = number1 * pow(number2, 2);
	quadradodoprimeiro = pow(number1, 2);
	modulodoprimeiro = fabs(number1);
	
	printf("A soma dos numeros digitados �: %.2f\n", soma);
    printf("A subtra��o dos numeros digitados �: %.2f\n", sub);
    printf("O produto dos numeros digitados �: %.2f\n", prod);
    printf("A media dos numeros digitados �: %.2f\n", median);
    printf("O Produto do primeiro numero pelo quadrado do segundo �: %.2f\n", quartesecond);
    printf("O Quadrado do primeiro numero: %.2f\n", quadradodoprimeiro);
    printf("O Modulo do primeiro numero �: %.2f\n", modulodoprimeiro);

	
	
    return 0;
}
