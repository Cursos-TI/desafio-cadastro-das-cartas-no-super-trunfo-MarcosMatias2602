#include <stdio.h>

int main() {

    //Carta1
    
    char nome1 [30] = "Recife";
    int populacao1 = 1000000;
    float area1 = 1098.25;
    int pontos1 = 50;

    //carta2

    char nome2 [30] = "Caruaru";
    int populacao2 = 500000;
    float area2 = 1100.00;
    int pontos2 = 30;
    
    printf("Qual o nome da cidade1:");
    scanf("%s", &nome1);
    
    printf("Qual a população da cidade1:");
    scanf("%d", &populacao1);

    printf("Qual a area da cidade1:");
    scanf("%f", &area1);

    printf("Quantos pontos turísticos tem a cidade1:");
    scanf("%d", &pontos1);

    printf("A seguir temos os dados da Carta1:\n");
    printf("O nome da cidade1 é: %s\n", nome1);
    printf("A população da cidade1: %d\n", populacao1);
    printf("A area da cidade1 é: %f\n", area1);
    printf("A quantidade de pontos turísticos da cidade1 é: %d\n", pontos1);



}