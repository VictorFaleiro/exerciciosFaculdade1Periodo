#include <stdio.h>

int main(void)
{
    int idade;

    while(idade != 0){
        do{
            printf("Digite a idade: ");
            scanf("%d", &idade);
            if(idade > 100 || idade < 0){
                printf("Idade invalida. Redigite.\n");
            }
        }while(idade > 100 || idade < 0);

        if(idade == 0){
            printf("Programa encerrado.\n");
        }else{
            if(idade >= 5 && idade <= 7){
                printf("Categoria: Infantil A\n");
            }else if(idade >= 8 && idade <= 10){
                printf("Categoria: Infantil B\n");
            }else if(idade >= 11 && idade <= 13){
                printf("Categoria: Juvenil A\n");
            }else if(idade >= 14 && idade <= 17){
                printf("Categoria: Juvenil B\n");
            }else if(idade >= 18){
                printf("Categoria: Adulto\n");
            }
        }
    }

    return 0;
}
