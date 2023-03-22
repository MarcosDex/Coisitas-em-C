#include <stdio.h>

//Nona Questão
int main() {
    int i, j, valor, limite;

    printf("Qual tabuada deseja dar uma bisuiada? ");
    scanf("%d", &valor);


    for (i = 0; i <= 9
	; i++) {
        printf("\n%d x %d = %d\n", valor, i, valor*i);
    }

    return 0;
}
