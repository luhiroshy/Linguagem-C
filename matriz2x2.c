#include <stdio.h>
int main() {
    int matriz[2][2];
    
    printf("Escolha os algorismos da matriz 2x2: \n");
    for (int i = 0; i < 2; i++){
        for (int j =  0; j < 2; j++){
            printf("Algarismo [%d][%d]:", i,j);
            scanf("%d", &matriz[i][j]);
        }
}

    printf("Imprimindo os elementos da matriz:\n");
        for (int i = 0; i < 2; i++){
            for (int j =  0; j < 2; j++) {
                printf("%d ", matriz[i][j]);
            }
            printf("\n");
        }
    return 0;
}
