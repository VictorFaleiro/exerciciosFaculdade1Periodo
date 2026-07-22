#include <stdio.h>

int main(void)
{
    float preco, precoFinal;
    int condicao;
    preco = -1;

    while(preco != 0){
        do{
            printf("Digite o preco do produto: ");
            scanf("%f", &preco);
            if(preco < 0){
                printf("Preco invalido. Redigite.");
            }
        }while(preco < 0);

        if(preco == 0){
            printf("Programa encerrado.\n");
        }else{
            do{
                printf("Digite o metodo de pagamento:\n");
                printf("1 - A vista em dinheiro.\n2 - A vista no cartao de credito.\n3 - Em duas vezes no credito.\n4 - Em tres vezes no credito.\n");
                scanf("%d", &condicao);
                if(condicao < 1 || condicao > 4){
                    printf("Opcao invalida. Redigite.");
                }
            }while(condicao < 1 || condicao > 4);

            switch(condicao){
                case 1:
                    precoFinal = preco * 0.90;
                    printf("Valor final: %.2f\n", precoFinal);
                    break;
                case 2:
                    precoFinal = preco * 0.95;
                    printf("Valor final: %.2f\n", precoFinal);
                    break;
                case 3:
                    precoFinal = preco / 2;
                    printf("Valor final: 2 x %.2f\n", precoFinal);
                    break;
                case 4:
                    precoFinal = (preco * 1.1) / 3;
                    printf("Valor final: 3 x %.2f\n", precoFinal);
                    break;
            }
        }
    }

    return 0;
}
