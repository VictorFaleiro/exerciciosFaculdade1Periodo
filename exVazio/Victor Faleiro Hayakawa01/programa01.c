#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
    char nome[100];
    char email[100];
    int livros;
    float salario;

    printf("Digite seu nome completo: ");
    fgets(nome, sizeof(nome), stdin);

    printf("Digite seu e-mail: ");
    scanf("%s", email);

    printf("Digite quantos livros voce leu no ano anterior: ");
    scanf("%d", &livros);
    getchar();

    printf("Digite o seu salario: ");
    scanf("%f", &salario);
    getchar();

    printf("Nome: %s", nome);
    printf("E-mail: %s\n", email);
    printf("Livros lidos no ano anterior: %d\n", livros);
    printf("Salario: %f\n", salario);

return 0;
}
