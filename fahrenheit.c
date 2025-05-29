#include <stdio.h>

int main(void) {
    float f, c;
    
    printf("Indique uma temperatura em fahrenheit: ");
    scanf("%f", &f);
    
c = (f - 32) * 5/9;
    
    printf("\nEssa temperatura em graus celcius é: %.1f.", c);

    return 0;
}
