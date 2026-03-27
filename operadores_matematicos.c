#include <stdio.h>

int main(){
    
    // Operações aritimeticas básicas
    printf("Operadores Aritiméticos Básicos:\n");
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
    printf("Operadores de Atribuição:\n");
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
    printf("Incremento e Decremento:\n");
    int d;
    printf("Digite o valor de d: ");
    scanf("%d", &d);
   
    // Operadores de incremento e decremento são usados para aumentar ou diminuir o valor da variavel em 1, respectivamente.
    d++; // d passa a receber o valor de d + 1.
    printf("d++ = %d\n", d);
    d--; // d passa a receber o valor de d -1.
    printf("d-- = %d\n", d);

    //Manipulação e conversão de tipos
    printf("Manipulação e Conversão de Tipos:\n");
    // conversão inplicita: Ocorre quando o compilador converte automaticamente um tipo de dado para outro.
    printf("Conversão Implícita:\n");
    int e = 10;
    float f = 5.5;
    printf("e = %d\n", e);
    printf("f = %f\n", f);

    printf("e + f = %.2f\n", e + f);
    printf("e - f = %.2f\n", e - f);
    printf("e * f = %.2f\n", e * f);
    printf("e / f = %.2f\n", e / f); // A operação por ser realizado entre um número inteiro e um numero de ponto flutuante, o resultao sái diferente, pois o número inteiro é convertido implicitamente para o tipo de dado float.

    // conversão explícita: Ocorre quando o programador força a conversão de um tipo de dado para outro usando um operador de cast.
    printf("Conversão Explícita:\n");
    int g = 10;
    float h = 5.5;
    printf("g = %d\n", g);
    printf("h = %f\n", h);

    printf ("g + h = %.2f\n", (float)g + h);
    printf ("g - h = %.2f\n", (float)g - h);
    printf ("g * h = %.2f\n", (float)g * h);
    printf ("g / h = %.2f\n", (float)g / h); // O operador de cast (float) é usado para converter explicitamente a variável g do tipo inteiro para o tipo float antes de realizar a operação com a variável h, que já é do tipo float. Isso garante que a operação seja realizada corretamente, considerando os tipos de dados envolvidos.

    return 0;

}
