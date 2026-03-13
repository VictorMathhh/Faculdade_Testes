/*  Agora você aplicará os conceitos estudados no nível básico, criando um programa em C que gerencia o cadastro de alunos em uma turma. Utilizaremos variáveis para armazenar informações como nome, idade e matrícula dos alunos. Operadores de atribuição serão usados para atualizar os dados conforme necessário.
As funções printf e scanf serão usadas para interagir com o usuário, permitindo a entrada dos dados dos alunos e a exibição das informações cadastradas. Essa prática reforçará seu entendimento sobre variáveis, tipos de dados e funções de entrada e saída, preparando-o para resolver problemas mais complexos.*/

#include <stdio.h>
#include <string.h>

int main() {
char nome[50];
int idade;
int matricula;

printf("digite o nome do aluno: ");
fgets(nome, 50, stdin);

nome[strcspn(nome, "\n")] = 0;

printf("digite a idade do aluno: ");
scanf("%d", &idade);

printf("digite a matricula do aluno: ");
scanf("%d", &matricula);

printf("o nome do aluno é: %s\n", nome);
printf("a idade do aluno é: %d\n", idade);
printf("a matricula do aluno é: %d\n", matricula);
return 0;

}
