#include <stdio.h>
int main() {
    int matriz[2][3], soma = 0, i = 0, j = 0;
    
    printf("Escolha os algorismos da matriz 2x3: \n");
    for (int i = 0; i < 2; i++){
        for (int j =  0; j < 3; j++){
            printf("Algarismo [%d][%d]:", i,j);
            scanf("%d", &matriz[i][j]);
            soma += matriz[i][j];
        }
}
    printf("Soma dos números da matriz: %d", soma);
      
    return 0;
}
