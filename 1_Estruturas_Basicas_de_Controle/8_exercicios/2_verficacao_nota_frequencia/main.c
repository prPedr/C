// Exercício 2: Verificação de Nota e Frequência para Aprovação​

// Você foi contratado para fazer um sistema simples deavaliação escolar.
// O programa deve apresentar o seguinte menu:

// Verificar se o aluno foi aprovado
// Sair

// ​Se o usuário escolher a opção 1, o programa deve solicitara nota
// final (de 0 a 10) e a frequência (porcentagem de presença, de 0 a 100).

// O aluno só será aprovado se a nota for maior ou igual a 7 e a frequência
// for maior ou igual a 75%. Use if else para essa verificação dentro do case 1.

// Se o usuário escolher a opção 2, o programa deve encerrar.
// Se for digitada uma opção inválida, exiba a mensagem "Opção inválida!".

#include <stdio.h>

int main() {
  int opcao;

  printf("|-----------------------------------------|\n");
  printf("|                   MENU                  |\n");
  printf("|-----------------------------------------|\n");
  printf("| 1 - Verificar se o aluno foi aprovado   |\n");
  printf("| 2 - Sair                                |\n");
  printf("|-----------------------------------------|\n");
  printf("Escolha a sua opcao: ");
  scanf("%d", &opcao);

  switch (opcao) {
    case 1:
      int notaFinal, porcentagemPresenca;

      printf("Informe a nota final (0 a 10): ");
      scanf("%d", &notaFinal);

      printf("Informe a porcentagem de presenca (0 a 100): ");
      scanf("%d", &porcentagemPresenca);

      if (notaFinal >= 7 && porcentagemPresenca >= 75) {
        printf("Aluno aprovado");
      } else {
        printf("Aluno reprovado");
      }
      break;
    case 2:
      printf("Saindo...");
      break;
    default:
      printf("Opcao invalida");
      break;
  }

  return 0;
}
