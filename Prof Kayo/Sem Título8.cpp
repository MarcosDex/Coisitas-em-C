#include <stdio.h>

//Oitava Questão
int main() {
    int i, j, escolha = 1;

    while (escolha == 1) { 
        for (i = 1; i <= 9; i++) {
            printf("Tabuada do %d:\n", i);

            for (j = 1; j <= 10; j++) {
                printf("%d x %d = %d\n", i, j, i*j);
            }

            printf("Pressione Enter para continuar...\n");
            getchar(); 
        }

        printf("Deseja continuar? Digite 1 para sim (irei repetir a tabuada) ou 0 para encerrar o programa: ");
        scanf("%d", &escolha);
        getchar(); 
    }

    return 0;
}
