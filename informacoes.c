#include <stdio.h>

int main(void) {
    char nome[100], endereco[100]; 
    int telefone, idade;
    
    printf("Digite seu nome: ");
    scanf("%s", &nome);
    printf("Digite seu endereço: ");
    scanf("%s", &endereco);
    printf("Digite seu telefone: ");
    scanf("%d", &telefone);
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    
    printf("\nSeu nome é %s, você tem %d anos, mora na rua %s e seu telefone é %d.", nome, idade, endereco, telefone);
    
    return 0;
}
