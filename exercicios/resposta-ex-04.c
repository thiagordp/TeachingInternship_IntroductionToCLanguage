/**
 * Soma dos dígitos de um número
 */
#include<stdio.h>

int soma(int num) {

    int total = 0;
    
    while (num != 0) {
        total += num % 10;
        num /= 10;
    }

    return total;
}


int main() {
    int numero, resultado;
    
    printf("Digite um número: ");
    scanf("%d", &numero);

    resultado = soma(numero);

    printf("Soma dos dígitos de %d é %d\n", numero, resultado);    

    return 0;
}

