#include <stdio.h>
#include <stdbool.h>

int main(void){
    char resposta;
    bool respostaVF;

    printf("Voce ja programou em linguagem C antes da nossa disciplina?\n");
    printf("Responda S para \"sim\" e N para \"nao\": ");
    scanf("%c", &resposta);

    if (resposta == 'S' || resposta == 's'){
        respostaVF = true;
        printf("Sua resposta foi sim\n");
    }else if (resposta == 'N' || resposta == 'n'){
        respostaVF = false;
        printf("Sua resposta foi nao\n");
    }else{
        printf("Resposta invalida\n");
    }

    return 0;
}
