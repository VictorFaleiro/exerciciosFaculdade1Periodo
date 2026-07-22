#include <stdio.h>
#include <conio.h>

int main(void)
{
    char caractere;

    caractere = getche();

    switch(caractere)
    {
        case '.':
            printf(" Ponto\n");
            break;
        case ',':
            printf(" Virgula\n");
            break;
        case ':':
            printf(" Dois pontos\n");
            break;
        case '/':
            printf(" Barra\n");
            break;
        case '\\':
            printf(" Barra invertida\n");
            break;
        case '|':
            printf(" Barra vertical\n");
            break;
        case ';':
            printf(" Ponto e virgula\n");
            break;
        case '{':
            printf(" Chave\n");
            break;
        case '}':
            printf(" Chave\n");
            break;
        case '(':
            printf(" Parentese\n");
            break;
        case ')':
            printf(" Parentese\n");
            break;
        case '[':
            printf(" Colchete\n");
            break;
        case ']':
            printf(" Colchete\n");
            break;
        case '@':
            printf(" Arroba\n");
            break;
        case '!':
            printf(" Exclamacao\n");
            break;
        case '$':
            printf(" Cifrao\n");
            break;
        case '*':
            printf(" Asterisco\n");
            break;
        case '&':
            printf(" Ampersand\n");
            break;
        default:
            printf(" Caractere invalido\n");
    }

    return 0;
}
