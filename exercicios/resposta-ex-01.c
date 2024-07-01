/**
 * Exercício 2: Calcular Fibonacci
 * 
 * Exemplo:
 *    
 *      fibonacci(0) = 0
 *      fibonacci(4) = 3
 *      fibonacci(5) = 5
 *      fibonacci(9) = 34
 *      fibonacci(11) = 89
 */
#include<stdio.h>

int fibonacci(int n){
    if (n <= 1)
        return n;
    else
        return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
    int numero, resultado;

    printf("Digite um número: ");
    scanf("%d", &numero);
    
    resultado = fibonacci(numero);
    printf("Fibonacci de %d é %d\n", numero, resultado);
}