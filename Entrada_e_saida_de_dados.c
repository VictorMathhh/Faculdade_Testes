#include <stdio.h>
#include <string.h>
int main(){
char nome[50];
float altura;
int idade;

printf("Digite seu nome: ");
fgets(nome, 50, stdin); // Lê uma linha de texto, incluindo espaços, e armazena em 'nome'

nome[strcspn(nome, "\n")] = 0; // Remove o caractere de nova linha adicionado pelo fgets

printf("O nome é: %s\n", nome); // Exibe o nome digitado

printf("Digite sua altura: "); 
scanf("%f", &altura);
printf("A altura é: %.2f metros\n", altura); // Exibe a altura com 2 casas decimais

printf("Digite sua idade: ");
scanf("%d", &idade);
printf("A idade é: %d anos\n", idade); // Exibe a idade digitada
return 0;

}
