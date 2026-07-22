#include <stdio.h>
#include <locale.h>

int main(void){
    float pe, jarda, polegada, milha;

    setlocale(LC_ALL,"Portuguese"); //aceita caracteres do portugues

    printf("Digite a medida em pés: ");
    scanf("%f", &pe);

    polegada = pe * 12;
    jarda = pe / 3;
    milha = pe / 5280;

    printf("Essa medida corresponde em %f polegadas\n", polegada);
    printf("Essa medida corresponde em %f jardas\n", jarda);
    printf("Essa medida corresponde em %f milhas\n", milha);

return 0;
}
