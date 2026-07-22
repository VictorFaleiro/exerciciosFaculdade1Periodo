#include <stdio.h>

int main(void)
{
    int i = 1;
    char palavra[50] = "Palavra";

    do{
        printf("%s\n", palavra);
        i++;
    }while(i <= 20);

    return 0;
}
