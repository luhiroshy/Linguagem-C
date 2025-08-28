#include <stdio.h>
int main() {
    int matriz[3][2], maior, i = 0, j = 0, par = 0;
    
    printf("Escolha os algorismos da matriz 3x3: \n");
    for (int i = 0; i < 3; i++){
        for (int j =  0; j < 2; j++){
            printf("Algarismo [%d][%d]:", i,j);
            scanf("%d", &matriz[i][j]);
        }
}

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 2; j++){
            if(matriz[i][j] % 2 == 0){
             par++;   
            }
        }
}

    printf("A soma dos números pares da matriz: %d", par);
      
    return 0;
}
