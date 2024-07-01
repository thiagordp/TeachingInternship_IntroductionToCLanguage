/**
 * O número 135 satisfaz a propriedade 135 = 1¹ + 3² + 5³
 * As potências na soma correspondem à posição do
 * respectivo algarismo no número 135 (ex.: o 5 é o
 * terceiro algarismo no número 135).
 *
 * Encontre todos os
 * números menores que 1000 que satisfazem a mesma
 * propriedade.
 */

#include <stdio.h>

int checar_numero(int numero)
{
    int aux, a, b, c, soma;
    aux = numero;

	// Checar se é menor que 10
    if (numero < 10) {
        return 1;
    }
    // Caso entre 10 e 99.
    else if (numero < 100) {
        a = numero / 10;
        b = numero % 10;

        soma = a + b * b;

        if (soma == numero) {
            return 1;
        }
        else {
            return 0;
        }
    }
    // Entre 100 e 999.
    else {
        a = numero / 100;
        aux = numero % 100;
        b = aux / 10;
        c = numero % 10;

        soma = a + b * b + c * c * c;

        if (soma == numero) {
            return 1;
        }
        else {
            return 0;
        }
    }
}

int main()
{
    int i;
    int result;

    for (i = 0; i < 1000; i++) {
        result = checar_numero(i);

        if (result == 1) {
            printf("%d\n", i);
        }
    }

    return 0;
}