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
                int Populacao1;
                float Area1;
                float PIB1;
                int Pontos_turisticos1;

                    // Carta 2
                char Estado2;
                char Codigo2[4];
                char Cidade2[50];
                int Populacao2;
                float Area2;
                float PIB2;
                int Pontos_turisticos2;

  // Área para entrada de dados

         // Carta 1
                printf("Digite uma letra de (A a H) para representar o estado da carta 1: ");
                    scanf(" %c", &Estado1);
                printf("Digite o código da carta 1 (ex: A01): ");
                    scanf("%s", Codigo1);
                printf("Digite o nome da Cidade da carta 1: ");
                    scanf("%s", Cidade1);
                printf("Qual o número de habitantes da cidade da carta 1 (sem pontos ou virgulas): ");
                    scanf("%d", &Populacao1);
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
                    scanf("%s", Codigo2);
                printf("Digite o nome da Cidade da carta 2: ");
                    scanf("%s", Cidade2);
                printf("Qual o número de habitantes da cidade da carta 2 (sem pontos ou virgulas): ");
                    scanf("%d", &Populacao2);
                printf("Digite a área em km² (sem pontos de milhar, use ponto apenas para decimais): ");
                    scanf("%f", &Area2);
                printf("Digite qunato de produto interno bruto (PIB) da carta 2 (sem pontos ou virgulas): ");
                    scanf("%f", &PIB2);
                printf("Qual a quantidade de pontos turisticos a carta 2 possui: ");
                    scanf("%d", &Pontos_turisticos2);

  // Área para exibição dos dados da cidade

                    // espaço para aparecer as cartas 
        printf("\n\n\n");


                    // impressão da carta 1
        printf("   Carta 1\n");
        printf("Estado: %c\n", Estado1);
        printf("Código: %s\n", Codigo1);
        printf("Nome da Cidade: %s\n", Cidade1);
        printf("População: %d\n", Populacao1);
        printf("Área: %.2f Km²\n", Area1);
        printf("PIB: %.2f\n", PIB1);
        printf("Número de Pontos Turísticos: %d\n", Pontos_turisticos1);

                    // espaço entre as cartas 
        printf("\n-------------------------\n");

                    // impressão da carta 2
        printf("   Carta 2\n");
        printf("Estado: %c\n", Estado2);
        printf("Código: %s\n", Codigo2);
        printf("Nome da Cidade: %s\n", Cidade2);
        printf("População: %d\n", Populacao2);
        printf("Área: %.2f Km²\n", Area2);
        printf("PIB: %.2f\n", PIB2);
        printf("Número de Pontos Turísticos: %d\n", Pontos_turisticos2);

return 0;
} 
