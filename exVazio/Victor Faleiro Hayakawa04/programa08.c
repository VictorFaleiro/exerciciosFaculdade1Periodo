#include <stdio.h>
#include <time.h>

int main(void)
{
    int diaSemana;

    time_t now = time(NULL);
    struct tm* local = localtime(&now);
    int diaDaSemana = local->tm_wday;

    switch(diaDaSemana)
    {
        case 0:
            printf("Domingo\n");
            break;
        case 1:
            printf("Segunda-feira\n");
            break;
        case 2:
            printf("Terca-feira\n");
            break;
        case 3:
            printf("Quarta-feira\n");
            break;
        case 4:
            printf("Quinta-feira\n");
            break;
        case 5:
            printf("Sexta-feira\n");
            break;
        case 6:
            printf("Sabado\n");
            break;
    }

    return 0;
}
