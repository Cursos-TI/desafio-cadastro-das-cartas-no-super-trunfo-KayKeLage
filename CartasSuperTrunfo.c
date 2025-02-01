#include<stdio.h>
int main(){
    
    char pais[10] , estado[10];
    float populacao , area , PIB;
    int cidade , turismo;

    printf("Qual o nome do pais ?\n");
    scanf("%s", &pais);

 // Cada estado esta identificado por letras de A-H
    printf("Qual o estado ?\n");
    scanf("%s", &estado);

// Cada cidade esta dentificada pelos numeros de 1-4
    printf("Qual a cidade ?\n");
    scanf("%d", &cidade);
    printf("Qual a populacao ?\n");
    scanf("%f", &populacao);
    printf("Qual a area ?\n");
    scanf("%f", &area);
    printf("Qual o PIB ?\n");
    scanf("%f", &PIB);
    printf("Tem quantos pontos turisticos ?\n");
    scanf("%d", &turismo);

    printf("\n");
    printf("Descricoes da carta: \n");
    printf("\n");

    printf("Pais - %s\n", pais);
    printf("Estado - %s\n", estado);
    printf("Cidade - %d\n", cidade);
    printf("Codigo da carta - %s%d\n", estado,cidade);
    printf("Populacao - %.2f\n", populacao);
    printf("Area - %.2f\n", area);
    printf("PIB - %.2f\n", PIB);
    printf("Pontos turisticos - %d\n", turismo);
    
    return 0;
}