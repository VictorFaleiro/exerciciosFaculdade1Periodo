#include <stdio.h>

int main(void)
{
    int num, somatorio;

    somatorio = 0;
    num = 1;

    for( ; num <= 10; num++){
        somatorio += num;
    }

    printf("O somatorio e: %d\n", somatorio);

    return 0;
}
