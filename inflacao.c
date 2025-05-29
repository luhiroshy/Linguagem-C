#include <stdio.h>

int main(void) {
    float p, i1, i2, r1, r2;
    
    printf("Indique o preço de um produto: ");
    scanf("%f", &p);
    
i1 = (10 * p) / 100;
i2 = (20 * p) / 100;
r1 = p + i1;
r2 = p + i2;
    
    if(p < 100){
        printf("O produto com inflação é: %.2f", r1);
    } else {
        printf("O produto com inflação é: %.2f", r2);
    }

    return 0;
}
