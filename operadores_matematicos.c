#include <stdio.h>

int main(){
    
    // Operações aritimeticas básicas
    int a, b; // variáveis que armazenam valores inteiros 
    printf("digite o valor de a: "); // Solicita o valor de a ao usuário
    scanf("%d", &a);
    printf("digite o valor de b: "); // Mesmo processo para b
    scanf("%d", &b);
    //realiza a operação matemática de adiçoa, subtração, multiplicação e divisão, exibindo os valores
    printf("a + b = %d\n", a + b);
    
    printf("a - b = %d\n", a - b);
    
    printf("a * b = %d\n", a * b);
    // Como é uma divisão entre inteiros, fica arredondado o resultado da divisão, truncando a parte decimal, caso haja
    printf("a / b = %d\n", a / b);

    // Operadores de atribuição
    int c;
    printf("digite o valor de c: "); //Solicita um valor a c ao usuário.
    scanf("%d", &c);
    // Operadores de atribuição são usados para atualizar valores de variáveis, realizando uma operação e atribuindo valores.
    c = a; //c passa a receber o valor de a.
    printf("c = %d\n", c);
    
    c += a; // c passa a recebor o valor de c + a.
    printf("c += a = %d\n", c);
    
    c -= a; // c passa a receber o valor de c - a.
    printf("c -= a = %d\n", c);

    c *= a; // c passa a receber o valor de c * a.
    printf("c *= a = %d\n", c);
    
    c /= a; // c passa a rceber o valor de c / a, mas como é um número inteiro, o valor é arredondado, truncando a parte decimal, caso haja.
    printf("c /= a = %d\n", c);

    // Incremento e Decremento
    int d;
    printf("Digite o valor de d: ");
    scanf("%d", &d);
   
    // Operadores de incremento e decremento são usados para aumentar ou diminuir o valor da variavel em 1, respectivamente.
    d++; // d passa a receber o valor de d + 1.
    printf("d++ = %d\n", d);
    d--; // d passa a receber o valor de d -1.
    printf("d-- = %d\n", d);

    return 0;

}
