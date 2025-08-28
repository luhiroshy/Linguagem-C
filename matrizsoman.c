#include <stdio.h>
int main() {
    int matriz[3][3], maior, i = 0, j = 0;
    
    printf("Escolha os algorismos da matriz 3x3: \n");
    for (int i = 0; i < 3; i++){
        for (int j =  0; j < 3; j++){
            printf("Algarismo [%d][%d]:", i,j);
            scanf("%d", &matriz[i][j]);
        }
}
maior = matriz[0][0];
    for (int i = 0; i < 3; i++){
        for (int j =  0; j < 3; j++){
            if(matriz[i][j] > maior){
             maior = matriz[i][j];   
            }
        }
}

    printf("Maior entre os números da matriz: %d", maior);
      
    return 0;
}
