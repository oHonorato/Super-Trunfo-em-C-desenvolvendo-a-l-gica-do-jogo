#include <stdio.h>


int main(){

    //VARIAVEIS DAS CARTAS UM E DOIS;
    
    char estado[50], estado2[50];
    char carta[50], carta2[50];
    char cidade[50], cidade2[50];
    unsigned long int populacao, populacao2;
    double area, area2;
    double pib, pib2;
    int turisticos, turisticos2, comparar;
    double densidade, densidade2;
    double percapita, percapita2;
    float poder1, poder2;
    long double inverso, inverso2;

    //COLETANDO DADOS DA CARTA 1

    printf("-----INSIRA OS DADOS DA PRIMEIRA CARTA-----");
    
    printf("\nInsira o estado: ");
    scanf("%s", estado);
    
    printf("Insira o codigo da carta: ");
    scanf("%s", carta);
    
    getchar();
    
    printf("Insira o nome da cidade: ");
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
    
    printf("\nInsira o estado: ");
    scanf("%s", estado2);
    
    printf("Insira o codigo da carta: ");
    scanf("%s", carta2);

    getchar();
    
    printf("Insira o nome da cidade: ");
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
    printf("POPULACAO: %lu" , populacao, "hab\n");
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
    printf("POPULACAO: %lu" , populacao2, "hab\n");
    printf("AREA: %.2lf\n", area2, "km²");
    printf("PIB: %.2lf\n", pib2, "R$");
    printf("PONTOS TURISTICOS: %d\n", turisticos2);
    printf("DENSIDADE POPULACIONAL: %.2lf\n", densidade2, "hab/km²");
    printf("PIB PER CAPITA: %.2lf\n", percapita2, "R$");
    printf("SUPER PODER: %.2f\n", poder2);


    //COMPARANDO AS CARTAS
    printf("\n----------COMPARANDO AS CARTAS----------\n");
    printf("Escolha uma opcao: \n");
    printf("1. Populacao \n");
    printf("2. Area \n");
    printf("3. PIB \n");
    printf("4. Pontos turisticos \n");
    printf("5. Densidade demografica \n");
    printf("----------------------------------------------\n");
    scanf("%d", &comparar);

    switch (comparar){
        case 1:
         printf("Voce escolheu comparar a populacao.\n");
         printf("A cidade da primerira carta :e %s com %lu hab.\n", cidade, populacao);
         printf("A cidade da segunda carta e: %s com %lu hab.\n", cidade2, populacao2);
         if (populacao > populacao2){
            printf("A carta numero 1 venceu !\n");
         } else if (populacao < populacao2){
            printf("A carta numero 2 venceu !\n");
         } else if (populacao == populacao2){
            printf("---------- EMPATOU ! ----------\n");
         }
        break;
        case 2:
         printf("Voce escolheu comparar a area km².\n");
         printf("A area da primerira carta e: %.2lf km²\n", area);
         printf("A area da segunda carta e: %.2lf km²\n", area2);
         if (area > area2){
            printf("A carta numero 1 venceu !\n");
         } else if (area < area2){
            printf("A carta numero 2 venceu !\n");
         } else if (area == area2){
            printf("---------- EMPATOU ! ----------\n");
         }
        break;
        case 3:
         printf("Voce escolheu comparar o PIB\n");
         printf("O PIB da primerira carta e: %.2lf R$\n", pib);
         printf("O PIB da segunda carta e: %.2lf R$\n", pib2);
         if (pib > pib2){
            printf("A carta numero 1 venceu !\n");
         } else if (pib < pib2){
            printf("A carta numero 2 venceu !\n");
         } else if (pib == pib2){
            printf("---------- EMPATOU ! ----------\n");
         }
        break;
        case 4:
         printf("Voce escolheu comparar os pontos turisticos\n");
         printf("Os pontos turistocs da primerira carta e: %d\n", turisticos);
         printf("Os pontos turistocs da segunda carta e: %d\n", turisticos2);
         if (turisticos > turisticos2){
            printf("A carta numero 1 venceu !\n");
         } else if (turisticos < turisticos2){
            printf("A carta numero 2 venceu !\n");
         } else if (turisticos == turisticos2){
            printf("---------- EMPATOU ! ----------\n");
         }
        break;
        case 5:
         printf("Voce escolheu comparar os pontos turisticos\n");
         printf("Os pontos turistocs da primerira carta e: %d\n", turisticos);
         printf("Os pontos turistocs da segunda carta e: %d\n", turisticos2);
         if (turisticos > turisticos2){
            printf("A carta numero 1 venceu !\n");
         } else if (turisticos < turisticos2){
            printf("A carta numero 2 venceu !\n");
         } else if (turisticos == turisticos2){
            printf("---------- EMPATOU ! ----------\n");
         }
        break;
        case 6:
         printf("Voce escolheu comparar a densidade demografica\n");
         printf("A densidade demografica da primerira carta e: %.2lf\n", densidade);
         printf("A densidade demografica da segunda carta e: %.2lf\n", densidade2);
         if (densidade > densidade2){
            printf("A carta numero 1 venceu !\n");
         } else if (densidade < densidade2){
            printf("A carta numero 2 venceu !\n");
         } else if (densidade == densidade2){
            printf("---------- EMPATOU ! ----------\n");
         }
        break;
        default:
         printf("---------------Insira uma opcao valida !---------------\n");

        
       

         
    }


  

    

    

    
    return 0;



}
