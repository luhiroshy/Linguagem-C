#include <stdio.h>

int main(void) {
    int ano;

    printf("Descubra se um ano é bissexto.\n");
    printf("indique o ano: ");
    scanf("%d", &ano);

    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        printf("\n%d é um ano bissexto.", ano);
    } else {
        printf("\n%d não é um ano bissexto.", ano);
    }

    return 0;
}
