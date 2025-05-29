#include <stdio.h>

int main(void) {
    float preco, opcao, desconto, o1, o2, parcelas, parcelado, juros, final;
    
    printf("Digite o total gasto na loja: ");
    scanf("%f", &preco);
    
    printf("\nAS opções de pagamento são: \n");
    printf("1- A vista com 10 %% de desconto. \n");
    printf("2- Em duas vezes (preço da etiqueta). \n");
    printf("3- De 3 até 10 vezes com 3 %% de juros ao mês (somente para compras acima de R$100,00). \n\n");
    printf("Digite a opção desejada(1, 2 ou 3): ");
    scanf("%f", &opcao);
    
    desconto = (10 * preco) / 100; 
    o1 = preco - desconto;
    o2 = preco / 2;
    
    if(opcao == 1){
        printf("\nO preço final ficou: %.2f.", o1);
    }
    if(opcao == 2){
        printf("\nO preço final ficou: %.2f por mês.", o2);
    }
    if((opcao == 3) && (preco > 100)){
        printf("\nVocê pode parcelar de 3 até 10 vezes com 3%% de juros ao mês.\nEscolha a quantidade de parcelas: ");
        scanf("%f", &parcelas);
        
    parcelado = preco / parcelas;
    juros = (3 * parcelado) / 100; 
    final = parcelado + juros;
    
    printf("O preço final ficou: %.2f por mês.", final);
    }
    if((opcao == 3) && (preco <= 100)){
        printf("O valor da compra precisa ser acima de R$100,00!");
    }

    return 0;
}
