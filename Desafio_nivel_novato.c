/* O que você vai fazer


Criar um programa em C que permita ao usuário inserir os dados de duas cartas do Super Trunfo. Para cada carta, o usuário deverá fornecer as seguintes informações:


Estado: Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char
 
Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)
 
Nome da Cidade: O nome da cidade. Tipo: char[] (string)
 
População: O número de habitantes da cidade. Tipo: int
 
Área (em km²): A área da cidade em quilômetros quadrados. Tipo: float
 
PIB: O Produto Interno Bruto da cidade. Tipo: float
 
Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade. Tipo: int
 
Após o usuário inserir os dados de cada carta, seu programa deve exibir na tela as informações cadastradas, de forma organizada e legível. Para cada carta, imprima cada informação em uma linha separada, com uma descrição clara. */

#include <stdio.h>
#include <string.h>

int main () {
    char estado[50], nome_cidade[100], codigo_carta[50]; // Variáveis para a primeira carta
    int  populacao, num_pontos_turisticos;
    float area, pib;
    char estado2[50], nome_cidade2[100], codigo_carta2[50]; // Variáveis para a segunda carta
    int  populacao2, num_pontos_turisticos2; 
    float area2, pib2;
    

    printf("digite o nome do estado (A-H): "); // Solicita ao usuário que insira o nome do 1° estado
        fgets(estado, 50, stdin);
    estado[strcspn(estado, "\n")] = 0;

    printf("digite o nome da cidade: "); // Solicita o nome da cidade para a 1° carta
        fgets(nome_cidade, 100, stdin); // Lê a entrada do usuário para o nome da cidade
    nome_cidade[strcspn(nome_cidade, "\n")] = 0; // Remove o caractere de nova linha do final da string, caso exista
    
    printf("digite o código da carta (ex: A01): "); // Solicita o código da carta para a 1° carta
        fgets(codigo_carta, 50, stdin);
    codigo_carta[strcspn(codigo_carta, "\n")] = 0;

    printf("digite a população da cidade:"); // Solicita a população da cidade para a 1° carta
    scanf("%d", &populacao); // Lê a população como um número inteiro

    printf("digite o nùmero de pontos turísticos da cidade: "); // Solicita o número de pontos turísticos para a 1° carta
    scanf("%d", &num_pontos_turisticos);
    
    printf("digite a área da cidade (em km²): "); // Solicita a área da cidade para a 1° carta
    scanf("%f", &area);

    printf("digite o PIB da cidade: "); // Solicita o PIB da cidade para a 1° carta
    scanf("%f", &pib);

    while(getchar() != '\n'); // Limpar o buffer do teclado após a leitura dos números

    printf("\n Informações da Carta 1:\n"); // Exibe as informações da primeira carta de forma organizada
    printf("este é o estado: %s\n", estado); // Imprime o estado da primeira carta
    printf("esta é a cidade: %s\n", nome_cidade); // Imprime o nome da cidade da primeira carta
    printf("este é o código da carta: %s\n", codigo_carta); // Imprime o código da carta da primeira carta
    printf("esta é a população: %d\n ", populacao); // Imprime a população da cidade da primeira carta
    printf("este é o número de pontos turísticos: %d\n", num_pontos_turisticos); // Imprime o número de pontos turísticos da cidade da primeira carta
    printf("esta é a área em km²: %.2f\n", area); // Imprime a área da cidade da primeira carta, formatada com duas casas decimais
    printf("este é o PIB: %.2f\n", pib); // Imprime o PIB da cidade da primeira carta, formatado com duas casas decimais
    
//Mesmo processo para a segunda carta, solicitando as informações e exibindo-as de forma organizada

    printf("\n digite o nome do estado (A-H): ");
        fgets(estado2, 50, stdin);
    estado2[strcspn(estado2, "\n")] = 0;

    printf("digite o nome da cidade: ");
        fgets(nome_cidade2, 100, stdin);
    nome_cidade2[strcspn(nome_cidade2, "\n")] = 0;
    
    printf("digite o codigo da carta (ex: A01): ");
        fgets(codigo_carta2, 50, stdin);
    codigo_carta2[strcspn(codigo_carta2, "\n")] = 0;

    printf("digite a população da cidade: ");
    scanf("%d", &populacao2);
    
    printf("digite o número de pontos turísticos da cidade: ");
    scanf("%d", &num_pontos_turisticos2);
    
    printf("digite a área da cidade (em km²): ");
    scanf("%f", &area2);

    printf("digite o PIB da cidade: ");
    scanf("%f", &pib2);

    printf("\n Informações da Carta 2:\n");
    printf("este é o estado: %s\n", estado2);
    printf("esta é a cidade: %s\n", nome_cidade2);
    printf("este é o código da carta: %s\n", codigo_carta2);
    printf("esta é a população: %d\n ", populacao2);
    printf("este é o número de pontos turísticos: %d\n", num_pontos_turisticos2);
    printf("esta é a área em km²: %.2f\n", area2);
    printf("este é o PIB: %.2f\n", pib2);
} 
