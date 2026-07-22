#include <stdio.h>

void contagem(int num){
    int i;
    for(i = 1; i <= num; i++){
        printf("%d\n", i);
    }
}

int main(){
    int num;
    do{
        printf("Entre com um positivo: ");
        scanf("%d", &num);
    }while(num < 0);

    contagem(num);

    return 0;
}
