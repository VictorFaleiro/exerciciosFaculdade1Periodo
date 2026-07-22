#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
    int x, i;
    srand(time(NULL));

    for(i = 0; i < 10; i++){
        x = (rand() % 100) + 1;
        printf("%d\n", x);
    }

    return 0;
}
