#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main(){
    //1 carta
    char est1;
    char cod1[5];
    char cit1[100];
    int pop1,pturist1;
    float area1,pib1;

    //2 carta
    char est2;
    char cod2[5];
    char cit2[100];
    int pop2,pturist2;
    float area2,pib2;


    //entra carta1
    printf("Digite os dados da Carta 1 \n");
    printf("Digite a letra que representa o Estado:");
    scanf(" %c",&est1);
    printf("Digite o codigo da carta:");
    scanf(" %s",cod1);
    printf("Digite o nome da cidade:");
    scanf(" %s",cit1);
    printf("Digite a população da cidade:");
    scanf(" %d",&pop1);
    printf("Digite a área da cidade em Km2:");
    scanf(" %f",&area1);
    printf("Digite o PIB em bilhoes de reais:");
    scanf(" %f",&pib1);
    printf("Digite a pontos turisticos:");
    scanf(" %d",&pturist1);
    //entra carta2
    printf("Digite os dados da Carta 2 \n");
    printf("Digite a letra que representa o Estado:");
    scanf(" %c",&est2);
    printf("Digite o codigo da carta:");
    scanf(" %s",cod2);
    printf("Digite o nome da cidade:");
    scanf(" %s",cit2);
    printf("Digite a população da cidade:");
    scanf(" %d",&pop2);
    printf("Digite a área da cidade em Km2:");
    scanf(" %f",&area2);
    printf("Digite o PIB em bilhoes de reais:");
    scanf(" %f",&pib2);
    printf("Digite a pontos turisticos:");
    scanf(" %d",&pturist2);
    //exibir
    printf("Carta 1\n");
    printf("Estado: %c\n",est1);
    printf("Codigo: %s\n",cod1);
    printf("Cidade: %s\n",cit1);
    printf("Populacao: %d\n",pop1);
    printf("Area: %.2f Km2\n",area1);
    printf("PIB: %.2f Bilhoes de reais\n",pib1);
    printf("Pontos turisticos: %d\n",pturist1);

    //exibir
    printf("Carta 2\n");
    printf("Estado: %c\n",est2);
    printf("Codigo: %s\n",cod2);
    printf("Cidade: %s\n",cit2);
    printf("Populacao: %d\n",pop2);
    printf("Area: %.2f Km2\n",area2);
    printf("PIB: %.2f Bilhoes de reais\n",pib2);
    printf("Pontos turisticos: %d\n",pturist2);

        
    
}
