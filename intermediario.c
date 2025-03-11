#include<stdio.h>
int main(){
    
    char pais[10] , estado[10] , cidade[20];
    float populacao , area , PIB , densidade ,PIBpc;
    int  turismo;

 // Cada estado esta identificado por letras de A-H
 // Cada cidade esta dentificada pelos numeros de 1-4

    //Primeira carta abaixo

    printf("Qual o estado ?\n");
    scanf("%s", &estado);

    printf("Qual o nome do pais ?\n");
    scanf("%s", &pais);

    printf("Qual a cidade ?\n");
    scanf("%s", &cidade);

    printf("Qual a populacao ?\n");
    scanf("%f", &populacao);

    printf("Qual a area ?\n");
    scanf("%f", &area);

    printf("Qual o PIB ?\n");
    scanf("%f", &PIB);

    printf("Tem quantos pontos turisticos ?\n");
    scanf("%d", &turismo);
    
    densidade = populacao / area ;
    PIBpc = PIB / populacao ;

    printf("\n");
    printf("Descricoes das cartas: \n");
    printf("\n");

    printf("Carta 1 - \n");
    printf("Pais - %s\n", pais);
    printf("Estado - %s\n", estado);
    printf("Codigo da carta - %s%d\n", estado,cidade);
    printf("Cidade - %s\n", cidade);
    printf("Populacao - %.2f\n", populacao);
    printf("Area - %.2f\n", area);
    printf("PIB - %.2f\n", PIB);
    printf("Pontos turisticos - %d\n", turismo);
    printf("Densidade populacional - %.2f \n" ,densidade);
    printf("PIB per capta - %.2f \n" ,PIBpc);
    
    // Segunda carta abaixo
    printf("Qual o estado ?\n");
    scanf("%s", &estado);

    printf("Qual o nome do pais ?\n");
    scanf("%s", &pais);

    printf("Qual a cidade ?\n");
    scanf("%s", &cidade);

    printf("Qual a populacao ?\n");
    scanf("%f", &populacao);

    printf("Qual a area ?\n");
    scanf("%f", &area);

    printf("Qual o PIB ?\n");
    scanf("%f", &PIB);

    printf("Tem quantos pontos turisticos ?\n");
    scanf("%d", &turismo);

    densidade = populacao / area ;
    PIBpc = PIB / populacao ;

    printf("Carta 2 - \n");
    printf("Pais - %s\n", pais);
    printf("Estado - %s\n", estado);
    printf("Codigo da carta - %s%d\n", estado,cidade);
    printf("Cidade - %s\n", cidade);
    printf("Populacao - %.2f\n", populacao);
    printf("Area - %.2f\n", area);
    printf("PIB - %.2f\n", PIB);
    printf("Pontos turisticos - %d\n", turismo);
    printf("Densidade populacional - %.2f \n" ,densidade);
    printf("PIB per capta - %.2f \n" ,PIBpc);

    return 0;
}