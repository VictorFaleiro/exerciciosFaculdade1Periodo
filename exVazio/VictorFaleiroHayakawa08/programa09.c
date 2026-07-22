#include <stdio.h>

int entradaValidada(int n1, int n2)
{
    if(n1 < n2){
        return 1;
    }
    else
        return 0;
}

void imprimirIntervalo(int n1, int n2)
{
    for(; n1 <= n2; n1++){
        printf("%d\n", n1);
    }
}

int main()
{
    int num1, num2;

    printf("Inicio do intervalo: ");
    scanf("%d", &num1);
    printf("Fim do intervalo: ");
    scanf("%d", &num2);

    if(entradaValidada(num1, num2)){
        imprimirIntervalo(num1, num2);
    }else{
        printf("Intervalo invalido\n");
    }

    return 0;
}

