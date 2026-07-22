#include <stdio.h>
#include <stdbool.h>
#include <conio.h>

int main(void)
{
    int max = 500000;
    int i = 0;
    bool flag = true;

    while(flag){
        printf("%d\n", ++i);
        if(i == 500){
            flag = false;
            printf("Processo concluido\n", i);
        }
        if(kbhit()){
            if(getch() == 27){
                flag = false;
                printf("Cancelado pelo usuario\n");
            }
        }
    }

    return 0;
}
