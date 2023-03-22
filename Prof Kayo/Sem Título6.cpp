#include <stdio.h>

//Sexta Questão
float calcular_media(float notas[]) {
    float soma = 0;

    for (int i = 0; i < 5; i++) {
        soma += notas[i];
    }

    return soma / 5;
}

int main() {
    float notas[5];
    float media;

   
    printf("Digite as notas do aluno:");
    for (int i = 0; i < 5; i++) {
        printf("Nota %d: ", i+1);
        scanf("%f", &notas[i]);
    }

    
    media = calcular_media(notas);


    if (media >= 7.0) {
        if (media > 7.0) {
            printf("Aprovado, Parabens!");
        } else {
            printf("Aprovado por media.");
        }
    } else {
        printf("Reprovado!");
    }

    return 0;
}
