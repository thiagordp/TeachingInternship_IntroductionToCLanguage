/**
 * Cálculo da tabuada
 */

#include<stdio.h>

#define FINAL_TABUADA 10

void tabuada(int number) {
    int i;
    for (i = 0; i <= FINAL_TABUADA; i++) {
        printf("%3d x %d = %3d\n", i, number, i*number);
    }
}

int main() {
    int num;

    printf("Digite o número para cálculo da tabuada: ");
    scanf("%d", &num);

    tabuada(num);

    return 0;
}