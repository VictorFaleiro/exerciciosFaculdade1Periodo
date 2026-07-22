#include <stdio.h>
#include <conio.h>

int main(void)
{
    char nome[50] = "Victor Faleiro Hayakawa";
     while(1){
        if(kbhit()){
            if(getch() == 27){
                break;
            }
        }

        printf("%s\n", nome);
     }

     return 0;
}
