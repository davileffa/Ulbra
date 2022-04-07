#include <stdio.h> 

int main() {
  float salario, novoSalario;
  int percentualAumento;

  /*Recebe dados do usuario*/
  printf("Salario: $");
  scanf("%f%*c", &salario);
  printf("Percentual de aumento: ");
  scanf("%d%*c", &percentualAumento);

  /*Calculo aumento*/
  novoSalario = salario*percentualAumento/100 + salario;

  /*Mostra resultado na tela.*/
  printf("Novo salario %.2f\n", novoSalario);
  return 0;
}
