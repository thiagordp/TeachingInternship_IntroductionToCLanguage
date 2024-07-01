/**
 *  Cálculo da média de 3 números.
 * 
 *  5, 3, 5 -> 
 */

#include<stdio.h>

int main() {
    float sum = 0;
    float num, avg;
    int i;

    for (i = 0; i < 3; i++){
        printf("Digite %dº número: ", i+1);
        scanf("%f", &num);

        sum += num;
    }

    avg = sum / 3;

    printf("A média é: %f\n", avg);
    

    return 0;
}