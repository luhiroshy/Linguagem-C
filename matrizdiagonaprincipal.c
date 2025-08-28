#include <stdio.h>
int main() {
    int matriz[3][3];
    
    printf("Escolha os algorismos da matriz 3x3: \n");
    for (int i = 0; i < 3; i++){
        for (int j =  0; j < 3; j++){
            printf("Algarismo [%d][%d]:", i,j);
            scanf("%d", &matriz[i][j]);
        }
}

    printf("Imprimindo os elementos da dioagonal principal da matriz:\n");
        for (int i = 0; i < 3; i++){
            {
                printf("%d ", matriz[i][i]);
            }
        printf("\n");
        }
    return 0;
}
