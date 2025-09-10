#include <stdio.h>


int main() {

    //VARIAVEIS DAS CARTAS UM E DOIS;
    
    char estado[50], estado2[50];
    char carta[50], carta2[50];
    char cidade[50], cidade2[50];
    unsigned long int populacao, populacao2;
    double area, area2;
    double pib, pib2;
    int turisticos, turisticos2, compara1, compara2;
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
    printf("POPULACAO: %lu\n" , populacao, "hab");
    printf("AREA: %.2lf\n", area, "km²");
    printf("PIB: %.2lf\n", pib, "R$");
    printf("PONTOS TURISTICOS: %d\n", turisticos);
    printf("DENSIDADE POPULACIONAL: %.2lf\n", densidade , "hab/km²");
    printf("PIB PER CAPITA: %.2lf\n", percapita, "R$");
    printf("SUPER PODER: %.2f\n", poder1);

    printf("\n----------DADOS DA SEGUNDA CARTA----------\n");
    printf("ESTADO: %s\n ", estado2);
    printf("CARTA: %s\n", carta2);
    printf("CIDADE: %s\n", cidade2);
    printf("POPULACAO: %lu\n" , populacao2, "hab");
    printf("AREA: %.2lf\n", area2, "km²");
    printf("PIB: %.2lf\n", pib2, "R$");
    printf("PONTOS TURISTICOS: %d\n", turisticos2);
    printf("DENSIDADE POPULACIONAL: %.2lf\n", densidade2, "hab/km²");
    printf("PIB PER CAPITA: %.2lf\n", percapita2, "R$");
    printf("SUPER PODER: %.2f\n", poder2);


    //COMPARANDO AS CARTAS
    printf("\n----------ESCOLHA DOIS ATRIBUTOS PARA COMPARAR----------\n");
    printf("----------Primeiro atributo----------: \n");
    printf("1. Populacao \n");
    printf("2. Area \n");
    printf("3. PIB \n");
    printf("4. Pontos turisticos \n");
    printf("5. Densidade demografica \n");
    printf("----------------------------------------------\n");
    scanf("%d", &compara1);

    switch (compara1){
        case 1:
         printf("\n");
         printf("Voce escolheu comparar a populacao das seguintes cidades :\n");
         printf("A populacao da cidade %s e: %lu\n", cidade, populacao);
         printf("A populacao da cidade %s e: %lu\n", cidade2, populacao2);
         printf("--------------------------------------------------------------\n");
         
            printf("%s\n", 
            (populacao > populacao2) ? "A carta número 1 venceu!\n" :
            (populacao < populacao2) ? "A carta número 2 venceu!\n" :
            "---------- EMPATOU! ----------"
            );
         break;
        
        case 2:
         printf("\n");
         printf("Voce escolheu comparar a area km² das seguintes cidades: \n");
         printf("A area da cidade %s e: %.2lf\n", cidade, area);
         printf("A area da cidade %s e: %.2lf\n", cidade2, area2);
         printf("--------------------------------------------------------------\n");

            printf("%s\n", 
            (area > area2) ? "A carta número 1 venceu!\n" :
            (area < area2) ? "A carta número 2 venceu!\n" :
            "---------- EMPATOU! ----------"
            );
         break;
        
        case 3:
         printf("\n");
         printf("Voce escolheu comparar o PIB da cidades: \n"); 
         printf("O PIB da cidade %s e: %.2lf\n", cidade, pib);
         printf("O PIB da cidade %s e: %.2lf\n", cidade2, pib2);
         printf("--------------------------------------------------------------\n");
            
         
            printf("%s\n", 
            (pib > pib2) ? "A carta número 1 venceu!\n" :
            (pib < pib2) ? "A carta número 2 venceu!\n" :
            "---------- EMPATOU! ----------"
            );       
         break;
        
        case 4: 
         printf("\n");
         printf("Voce escolheu comparar os pontos turisticos das cidades: \n");
         printf("Os pontos turisticos da cidade %s e: %d\n", cidade);
         printf("Os pontos turisticos da cidade %s e: %d\n", cidade2);
         printf("--------------------------------------------------------------\n");
            
            printf("%s\n", 
            (turisticos > turisticos2) ? "A carta número 1 venceu!\n" :
            (turisticos < turisticos2) ? "A carta número 2 venceu!\n" :
            "---------- EMPATOU! ----------"
            );
         break;
        
        case 5:
         printf("\n");
         printf("Voce escolheu compara a a densidade demografica das cidades: \n");
         printf("A densidade populacional da cidade %s e: %.2lf\n", cidade, densidade);
         printf("A densidade populacional da cidade %s e: %.2lf\n", cidade2, densidade2);
         printf("--------------------------------------------------------------\n");
         
         inverso = 1.0 / densidade;
         inverso2 = 1.0 / densidade2;
         
            printf("%s\n", 
            (densidade > densidade2) ? "A carta número 2 venceu!\n" : 
            (densidade < densidade2) ? "A carta número 1 venceu!\n" :
            "---------- EMPATOU! ----------"
            );            
         break;    
        default: 
         printf("---------------Insira uma opcao valida !---------------\n");}
     
    

    printf("----------Segundo atributo----------: \n");
    printf("1. Populacao \n");
    printf("2. Area \n");
    printf("3. PIB \n");
    printf("4. Pontos turisticos \n");
    printf("5. Densidade demografica \n");
    printf("----------------------------------------------\n");
    scanf("%d", &compara2);

    if (compara1 == compara2 ) {
        printf("Voce nao pode selecionar o mesmo atributo !\n");
        printf("----------TENTE NOVAMENTE----------\n"); 
    }
    
    
    else {
      switch (compara2){
        case 1:
         printf("\n");
         printf("Voce escolheu comparar a populacao das seguintes cidades :\n");
         printf("A populacao da cidade %s e: %lu\n", cidade, populacao);
         printf("A populacao da cidade %s e: %lu\n", cidade2, populacao2);
         printf("--------------------------------------------------------------\n");
         
            printf("%s\n", 
            (populacao > populacao2) ? "A carta número 1 venceu!\n" :
            (populacao < populacao2) ? "A carta número 2 venceu!\n" :
            "---------- EMPATOU! ----------"
            );
            printf ("--------------------------------------------------------------\n");
            printf("-----A soma dos atributos de cada carta e :-----\n");
            printf("Carta 1:  %.2f\n", poder1);
            printf("Carta 2:  %.2f\n", poder2);
           
         
         break;
        
        case 2:
         printf("\n");
         printf("Voce escolheu comparar a area km² das seguintes cidades: \n");
         printf("A area da cidade %s e: %.2lf\n", cidade, area);
         printf("A area da cidade %s e: %.2lf\n", cidade2, area2);
         printf ("--------------------------------------------------------------\n");

            printf("%s\n", 
            (area > area2) ? "A carta número 1 venceu!\n" :
            (area < area2) ? "A carta número 2 venceu!\n" :
            "---------- EMPATOU! ----------"
            );
            printf ("--------------------------------------------------------------\n");
            printf("-----A soma dos atributos de cada carta e :-----\n");
            printf("Carta 1:  %.2f\n", poder1);
            printf("Carta 2:  %.2f\n", poder2);
         
         break;
        
        case 3:
         printf("\n");
         printf("Voce escolheu comparar o PIB da cidades: \n"); 
         printf("O PIB da cidade %s e: %.2lf\n", cidade, pib);
         printf("O PIB da cidade %s e: %.2lf\n", cidade2, pib2);
         printf ("--------------------------------------------------------------\n");
            
         
            printf("%s\n", 
            (pib > pib2) ? "A carta número 1 venceu!\n" :
            (pib < pib2) ? "A carta número 2 venceu!\n" :
            "---------- EMPATOU! ----------"
            );
            printf ("--------------------------------------------------------------\n");
            printf("-----A soma dos atributos de cada carta e :-----\n");
            printf("Carta 1:  %.2f\n", poder1);
            printf("Carta 2:  %.2f\n", poder2);
         
         break;
        
        case 4: 
         printf("\n");
         printf("Voce escolheu comparar os pontos turisticos das cidades: \n");
         printf("Os pontos turisticos da cidade %s e: %d\n", cidade);
         printf("Os pontos turisticos da cidade %s e: %d\n", cidade2);
         printf("--------------------------------------------------------------\n");
            
            printf("%d\n", 
            (turisticos > turisticos2) ? "A carta número 1 venceu!\n" :
            (turisticos < turisticos2) ? "A carta número 2 venceu!\n" :
            "---------- EMPATOU! ----------"
            );
            printf ("--------------------------------------------------------------\n");
            printf("-----A soma dos atributos de cada carta e :-----\n");
            printf("Carta 1:  %.2f\n", poder1);
            printf("Carta 2:  %.2f\n", poder2);
         
         
         break;
        
        case 5:
         printf("\n");
         printf("Voce escolheu compara a a densidade demografica das cidades: \n");
         printf("A densidade populacional da cidade %s e: %.2lf\n", cidade, densidade);
         printf("A densidade populacional da cidade %s e: %.2lf\n", cidade2, densidade2);
         printf ("--------------------------------------------------------------\n");
         
         inverso = 1.0 / densidade;
         inverso2 = 1.0 / densidade2;
         
            printf("%s\n", 
            (densidade > densidade2) ? "A carta número 2 venceu!\n" : 
            (densidade < densidade2) ? "A carta número 1 venceu!\n" :
            "---------- EMPATOU! ----------"
            );
            printf ("--------------------------------------------------------------\n");
            printf("-----A soma dos atributos de cada carta e :-----\n");
            printf("Carta 1:  %.2f\n", poder1);
            printf("Carta 2:  %.2f\n", poder2);
             

          
         break;
        
        default: 
         printf("---------------Insira uma opcao valida !---------------\n");
        }
    }

  
    
         
       
        
      

      
    

    

    

    

    
    return 0;



}
