#include <stdio.h>

int main() {
  int i, numeroExecucoes;

  printf("Infome o numero de execucoes: ");
  scanf("%d", &numeroExecucoes);

  for (i = 0; i < numeroExecucoes; i++) {
    printf("%d\n", i);
  }

  return 0;
}
