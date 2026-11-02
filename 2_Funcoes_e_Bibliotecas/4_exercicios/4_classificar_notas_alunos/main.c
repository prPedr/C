// 4. Classificar notas de alunos

// Crie uma função que receba a nota de um aluno e imprima:
// Aprovado (nota >= 6)
// Recuperação (nota >= 4 e < 6)
// Reprovado (nota < 4)

#include <stdio.h>

int calcularNota(int nota) {
  if (nota >= 6) {
    printf("Aprovado");
  } else if (nota >= 4 && nota < 6) {
    printf("Recuperacao");
  } else {
    printf("Reprovado");
  }
}

int main() {
  int n, resultado;

  printf("Informe a nota do aluno: ");
  scanf("%d", &n);

  resultado = calcularNota(n);

  printf("Status: %s", resultado);

  return 0;
}
