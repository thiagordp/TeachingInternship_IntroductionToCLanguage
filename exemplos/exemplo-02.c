/**
 * Exemplo 1: Maximo e mínimo entre dois números.
 * 
 * 
 */
#include <stdio.h> // Similar ao import do python.

int max(int a, int b) {
    if (a > b) {
        return a;
    }
    else {
        return b;
    }
}

int min(int a, int b) {
    if (a < b) {
        return a;
    }
    else {
        return b;
    }
}

// Versão optimizada
int max_optim(int a, int b) {
    return (a > b) ? a : b;

    // return (condição) ? [se verdadeiro] : [se falso];
}


// Função principal
int main() {
    // Declaração de variáveis.
    int x, y, z;
    
    printf("Digite o primero número: ");
    scanf("%d", &x);
    printf("Digite o segundo numero: ");
    scanf("%d", &y);

    z = max(x, y);

    printf("O numero maior é: %d\n", z);
    
    return 0;
}
