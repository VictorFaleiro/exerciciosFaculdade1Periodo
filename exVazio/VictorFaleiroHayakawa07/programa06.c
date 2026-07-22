#include <stdio.h>
#define TAM 50

int main(void)
{
    float notas[TAM] = {};
    int i, opcao, posicao, quant, quantNotas;
    float media, somatorio, maior, menor, notaRef, notaCorrigida, nota;
    i = 0;

    do{
        printf("Digite a nota (-1 para sai): ");
        scanf("%f", &nota);
        while (getchar() != '\n');

        if(nota == -1){
            printf("\n%d notas lidas!\n", i);
        }else if(nota < 0 || nota > 10){
            printf("Nota invalida. Redigite.\n");
        }else{
            notas[i] = nota;
            i++;
            if(i == TAM){
                printf("\nMaximo de %d notas registradas!!!\n", TAM);
            }
        }
    }while(nota != -1 && i < TAM);
    quantNotas = i;

    do{
        printf("\n(1) Imprimir todas as notas digitadas para conferencia\n(2) Calcular e imprimir a media da turma\n(3) Alterar uma nota\n(4) Imprimir a maior nota da turma\n(5) Imprimir a menor nota da turma\n(6) Imprimir as notas acima de uma nota informada\n(7) Imprimir as notas abaixo de uma nota informada\n(0) Encerrar o programa\n\nOpcao: ");
        scanf("%d", &opcao);
        while (getchar() != '\n');

        quant = 0;

        switch(opcao){
            case 1:
                for(i = 0; i < quantNotas; i++){
                    printf("[%d] - %.1f\n", i+1, notas[i]);
                    quant++;
                }
                printf("\n%d notas impressas\n", quant);
                break;

            case 2:
                somatorio = 0;
                for(i = 0; i < quantNotas; i++){
                    somatorio += notas[i];
                }
                media = somatorio / quantNotas;
                printf("A media da turma e: %.1f\n", media);
                break;

            case 3:
                for(i = 0; i < quantNotas; i++){
                    printf("[%d] - %.1f\n", i+1, notas[i]);
                }
                printf("Digite a posicao da nota que voce quer alterar: ");
                scanf("%d", &posicao);
                while (getchar() != '\n');

                posicao -= 1;

                if(posicao < 0 || posicao >= quantNotas){
                    printf("Posicao invalida.\n");
                }else{
                    printf("Digite a nota correta: ");
                    scanf("%f", &notaCorrigida);
                    while (getchar() != '\n');

                    if(notaCorrigida >= 0 && notaCorrigida <= 10){
                        notas[posicao] = notaCorrigida;
                        printf("\nNota alterada:\n");
                        for(i = 0; i < quantNotas; i++){
                            printf("[%d] - %.1f\n", i + 1, notas[i]);
                            quant++;
                        }
                        printf("\n%d notas impressas\n", quant);
                    }else{
                        printf("\nNota invalida\n");
                    }
                }
                break;

            case 4:
                maior = notas[0];
                for(i = 0; i < quantNotas; i++){
                    if(notas[i] > maior){
                        maior = notas[i];
                    }
                }
                printf("\nMaior nota: %.1f\n\n", maior);
                break;

            case 5:
                menor = notas[0];
                for(i = 0; i < quantNotas; i++){
                    if(notas[i] < menor){
                        menor = notas[i];
                    }
                }
                printf("\nMenor nota: %.1f\n\n", menor);
                break;

            case 6:
                printf("Digite a nota de referencia: ");
                scanf("%f", &notaRef);
                while (getchar() != '\n');

                for(i = 0; i < quantNotas; i++){
                    if(notaRef <= notas[i]){
                        printf("[%d] - %.1f\n", i + 1, notas[i]);
                        quant++;
                    }
                }
                printf("\n%d notas impressas\n", quant);
                printf("\n");
                break;

            case 7:
                printf("Digite a nota de referencia: ");
                scanf("%f", &notaRef);
                while (getchar() != '\n');

                for(i = 0; i < quantNotas; i++){
                    if(notaRef > notas[i]){
                        printf("[%d] - %.1f\n", i + 1, notas[i]);
                        quant++;
                    }
                }
                printf("\n%d notas impressas\n\n", quant);
                break;

            case 0:
                printf("\nPrograma encerrado\n");
                break;

            default:
                printf("\nOpcao invalida\n");
        }
    }while(opcao != 0);
    return 0;
}
