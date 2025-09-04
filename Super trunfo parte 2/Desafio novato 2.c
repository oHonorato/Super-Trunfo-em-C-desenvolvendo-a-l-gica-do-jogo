#include <stdio.h>

int main(){

    //VARIAVEIS DAS CARTAS UM E DOIS;
    
    char estado[50], estado2[50], carta[50], carta2[50], cidade[50], cidade2[50];
    unsigned long int populacao, populacao2;
    double area, area2, pib, pib2;
    int turisticos, turisticos2;
    double densidade, densidade2, percapita, percapita2;
    float poder1, poder2;
    long double inverso, inverso2;

    //COLETANDO DADOS DA CARTA 1

    printf("-----INSIRA OS DADOS DA PRIMEIRA CARTA-----");
    
    printf("\nInsira o estao: ");
    scanf("%s", estado);
    
    printf("Insira o codigo da carta: ");
    scanf("%s", carta);
    
    getchar();
    
    printf("Isira o nome da cidade: ");
    scanf("%[^\n]", cidade);
    
    printf("Insira a populacao: ");
    scanf("%lu", &populacao);

    printf("Insira a area: ");
    scanf("%lf", &area);

    printf("insira o PIB: ");
    scanf("%lf", &pib);

    printf("Insira o numero de pontos turisticos: ");
    scanf("%d", &turisticos);

    densidade =  populacao / area;
    percapita =  pib / populacao;
    inverso =  1.0 / densidade;
    poder1 = (float)(populacao + area + pib + turisticos + percapita + inverso);

    //COLETANDO DADOS DA CARTA 2

    printf("-----INSIRA OS DADOS DA SEGUNDA CARTA-----");
    
    printf("\nInsira o estao: ");
    scanf("%s", estado2);
    
    printf("Insira o codigo da carta: ");
    scanf("%s", carta2);
    
    getchar();
    
    printf("Isira o nome da cidade: ");
    scanf("%[^\n]", cidade2);
    
    printf("Insira a populacao: ");
    scanf("%lu", &populacao2);

    printf("Insira a area: ");
    scanf("%lf", &area2);

    printf("insira o PIB: ");
    scanf("%lf", &pib2);

    printf("Insira o numero de pontos turisticos: ");
    scanf("%d", &turisticos2);

    densidade2 =  populacao2 / area2;
    percapita2 =  pib2 / populacao2;
    inverso2 =  1.0 / densidade2;
    poder2 = (float)(populacao2 + area2 + pib2 + turisticos2 + percapita2 + inverso2);

    //MOSTRANDO OS DADOS DAS CARTAS:
    
    printf("\n----------DADOS DA PRIMEIRA CARTA----------\n");
    printf("ESTADO: %s\n", estado);
    printf("CARTA: %s\n", carta);
    printf("CIDADE: %s\n", cidade);
    printf("POPULACAO: %lu\n", populacao, "hab");
    printf("AREA: %.2lf\n", area, "km²");
    printf("PIB: %.2lf\n", pib, "R$");
    printf("PONTOS TURISTICOS: %d\n", turisticos);
    printf("DENSIDADE POPULACIONAL: %.2lf\n", densidade , "hab/km²");
    printf("PIB PER CAPITA: %.2lf\n", percapita, "R$");
    printf("SUPER PODER: %.2f\n", poder1);

    printf("\n----------DADOS DA SEGUNDA CARTA----------\n");
    printf("ESTADO: %s\n", estado2);
    printf("CARTA: %s\n", carta2);
    printf("CIDADE: %s\n", cidade2);
    printf("POPULACAO: %lu\n", populacao2, "hab");
    printf("AREA: %.2lf\n", area2, "km²");
    printf("PIB: %.2lf\n", pib2, "R$");
    printf("PONTOS TURISTICOS: %d\n", turisticos2);
    printf("DENSIDADE POPULACIONAL: %.2lf\n", densidade2, "hab/km²");
    printf("PIB PER CAPITA: %.2lf\n", percapita2, "R$");
    printf("SUPER PODER: %.2f\n", poder2);

    //COMPARANDO AS CARTAS UM E DOIS:

    printf("\n----------COMPARANDO A POPULACAO DAS CARTAS----------\n");

    printf("\nCARTA 1: %s (%s) %.lu", cidade, estado, populacao );
    printf("\nCARTA 2: %s (%s) %.lu", cidade2, estado2, populacao2 );

    if (populacao > populacao2){
        printf("\nA carta numero 1 venceu !");
    }    else{
        printf("\nA carta numero 2 venceu !");
    }

    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");
    printf("\n");

   
    return 0;



}
