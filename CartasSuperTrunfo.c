#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

                    // Carta 1
                char Estado1;
                char Codigo1[4];
                char Cidade1[50];
                unsigned long int Populacao1;
                float Area1;
                float PIB1;
                int Pontos_turisticos1;
                float Densipopulacional1;
                float PIBpercapita1;
                float Superpoder1;

                    // Carta 2
                char Estado2;
                char Codigo2[4];
                char Cidade2[50];
                unsigned long int Populacao2;
                float Area2;
                float PIB2;
                int Pontos_turisticos2;
                float Densipopulacional2;
                float PIBpercapita2;
                float Superpoder2;

  // Área para entrada de dados

         printf("Digite uma letra de (A a H) para representar o estado da carta 1: ");
                    scanf(" %c", &Estado1);
                printf("Digite o código da carta 1 (ex: A01): ");
                    scanf(" %s", Codigo1);
                printf("Digite o nome da Cidade da carta 1: ");
                    scanf(" %s", Cidade1);
                printf("Qual o número de habitantes da cidade da carta 1 (sem pontos ou virgulas): ");
                    scanf("%lu", &Populacao1);
                printf("Digite a área em km² (sem pontos de milhar, use ponto apenas para decimais): ");
                    scanf("%f", &Area1);
                printf("Digite qunato de produto interno bruto (PIB) da carta 1 (sem pontos ou virgulas): ");
                    scanf("%f", &PIB1);
                printf("Qual a quantidade de pontos turisticos a carta 1 possui: ");
                    scanf("%d", &Pontos_turisticos1);

        // Carta 2
                 printf("Digite uma letra de (A a H) para representar o estado da carta 2: ");
                    scanf(" %c", &Estado2);
                printf("Digite o codigo da carta 2 (ex: B01): ");
                    scanf(" %s", Codigo2);
                printf("Digite o nome da Cidade da carta 2: ");
                    scanf(" %s", Cidade2);
                printf("Qual o número de habitantes da cidade da carta 2 (sem pontos ou virgulas): ");
                    scanf("%lu", &Populacao2);
                printf("Digite a área em km² (sem pontos de milhar, use ponto apenas para decimais): ");
                    scanf("%f", &Area2);
                printf("Digite qunato de produto interno bruto (PIB) da carta 2 (sem pontos ou virgulas): ");
                    scanf("%f", &PIB2);
                printf("Qual a quantidade de pontos turisticos a carta 2 possui: ");
                    scanf("%d", &Pontos_turisticos2);

                    // Calculo Densidade Populacional e o PIB per Capita 
                                // Carta 1
                Densipopulacional1 = Populacao1 / Area1;
                PIBpercapita1 = PIB1 / Populacao1;
                                // Carta 1
                Densipopulacional2 = Populacao2 / Area2;
                PIBpercapita2 = PIB2 / Populacao2;

                    // Calcular o super poder
                                // Carta 1
                Superpoder1 = Populacao1 + Area1 + PIB1 + Pontos_turisticos1 + PIBpercapita1 + (1 /Densipopulacional1);
                                // Carta 2
                Superpoder2 = Populacao2 + Area2 + PIB2 + Pontos_turisticos2 + PIBpercapita2 + (1 /Densipopulacional2);

  // Área para exibição dos dados de cada carta

                    // espaço para aparecer as cartas 
              printf("\n\n\n");


                    // impressão da carta 2
        printf(" *** Carta 2 ***\n");
        printf("Estado: %c\n", Estado2);
        printf("Código: %s\n", Codigo2);
        printf("Nome da Cidade: %s\n", Cidade2);
        printf("População: %lu\n", Populacao2);
        printf("Área: %.2f Km²\n", Area2);
        printf("PIB: %.2f\n", PIB2);
        printf("Número de Pontos Turísticos: %d\n", Pontos_turisticos2);
        printf("Densidade Populacional: %.2f hab/km²\n", Densipopulacional2);
        printf("PIB per Capita: %.2f\n reais", PIBpercapita2);

                // Comparação das cartas
// Carta 1
            
                printf("\n\n\n*** Comparação das cartas ***\n");
            printf("__ Carta 1 __\n");
                printf("População: carta 1 venceu (%d)\n", Populacao1 > Populacao2);
                printf("Área: carta 1 venceu (%d)\n", Area1 > Area1);
                printf("PIB: carta 1 venceu (%d)\n", PIB1 > PIB2);
                printf("Número de pontos turisticos: carta 1 venceu (%d)\n", Pontos_turisticos1 > Pontos_turisticos2);
                printf("Densidade Populacional: carta 1 venceu (%d)\n", Densipopulacional1 < Densipopulacional2);
                printf("PIB per capita: carta 1 venceu (%d)\n", PIBpercapita1 > PIBpercapita2);
                printf("Super poder: carta 1 venceu (%d)\n", Superpoder1 > Superpoder2);

                              // espaço entre as cartas 
        printf("\n-------------------------\n");

// Carta 2
            printf("__ Carta 2 __\n");
                printf("População: carta 1 venceu (%d)\n", Populacao2 > Populacao1);
                printf("Área: carta 1 venceu (%d)\n", Area2 > Area1);
                printf("PIB: carta 1 venceu (%d)\n", PIB2 > PIB1);
                printf("Número de pontos turisticos: carta 1 venceu (%d)\n", Pontos_turisticos2 > Pontos_turisticos1);
                printf("Densidade Populacional: carta 1 venceu (%d)\n", Densipopulacional2 < Densipopulacional1);
                printf("PIB per capita: carta 1 venceu (%d)\n", PIBpercapita2 > PIBpercapita1);
                printf("Super poder: carta 1 venceu (%d)\n", Superpoder2 > Superpoder1);

return 0;
} 
