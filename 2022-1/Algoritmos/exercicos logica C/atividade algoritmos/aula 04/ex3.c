#include <stdio.h>
#include <string.h>

int main () {
  /*Declara as variáveis de peso e soma.*/
  float peso1 = 1.5;
  float peso2 = 2.5;
  float peso3 = 6.0;
  float somaPesos = peso1 + peso2 + peso3;

  /*Declara variáveis das notas e atribui os valores informados pelo usuario*/
  float nota1;
  printf("Nota 1: ");
  scanf("%f%*c", &nota1);

  float nota2;
  printf("Nota 2: ");
  scanf("%f%*c", &nota2);

  float nota3;
  printf("Nota 3: ");
  scanf("%f%*c", &nota3);

  /*Calculando a média ponderada*/
  float mediaPonderada = (peso1*nota1) + (peso2*nota2) + (peso3*nota3);
  float resultado = mediaPonderada / somaPesos;

  /*Imprime resultado na tela.*/
  printf("A média ponderada das notas do aluno é: %.2f \n", resultado);
  return 0;
}