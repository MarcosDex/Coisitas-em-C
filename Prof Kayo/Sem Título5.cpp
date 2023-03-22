#include <stdio.h>
#include <stdlib.h>

//Quinta Questão
int main() {
   int idade1, idade2, idade3;
   int maior, menor;
   
   
   printf("Digite a primeira idade: ");
   scanf("%d", &idade1);
   
   printf("Digite a segunda idade: ");
   scanf("%d", &idade2);
   
   printf("Digite a terceira idade: ");
   scanf("%d", &idade3);
   
      if (idade1 < 0) {
   	printf("Nao existe idade negativo jhow");
 		exit(0);
   }
    if (idade2 < 0) {
   	printf("Nao existe idade negativo jhow");
 		exit(0);
   }
	if (idade3 < 0) {
   	printf("Nao existe idade negativo jhow");
 		exit(0);
   } 
   
   maior = idade1;
   if (idade2 > maior) {
      maior = idade2;
   }
   if (idade3 > maior) {
      maior = idade3;
   }
   
   
   menor = idade1;
   if (idade2 < menor) {
      menor = idade2;
   }
   if (idade3 < menor) {
      menor = idade3;
   }
   
   
   printf("A maior idade digitada e: %d\n", maior);
   printf("A menor idade digitada e: %d\n", menor);
   
   return 0;
}
