#include <stdio.h>
#include <stdlib.h>

//Primeira Questão
int main() {
    int casossuspeitos, casosconfirmados, mortes, total;

    printf("Digite o numero de casos suspeitos: ");
    scanf("%d", &casossuspeitos);

    printf("Digite o numero de casos confirmados: ");
    scanf("%d", &casosconfirmados);

    printf("Digite o numero de mortes: ");
    scanf("%d", &mortes);
	
	if (casossuspeitos < 0) {
		printf("Se os casos sao negativos nao existem casos na cidade...");
		exit(0);
	}
	
	if (casosconfirmados < 0) {
		printf("Se os casos sao negativos nao existem casos confirmados na cidade...");
		exit(0);
	}
	
	if (mortes < 0) {
		printf("Ninguem morreu. Ainda...");
		exit(0);
	}
	
    total = casossuspeitos + casosconfirmados + mortes;

    printf("Taxa de dados sobre a dengue em PE:\n");
    printf("Casos suspeitos: %d\n", casossuspeitos);
    printf("Casos confirmados: %d\n", casosconfirmados);
    printf("Quantidade de mortes: %d\n", mortes);
    printf("Total de dados: %d\n", total);

    return 0;
}



