#include <stdio.h>

typedef struct {
    char codigo[4];
    char nome[50];
    unsigned long int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
    float superPoder;
} Carta;

void cadastrarCarta1(Carta *carta1)
{
    printf("\nDigite as informações da Primeira carta:\n");
    printf("Digite o código da cidade (ex: A01): \n");
    scanf("%s", carta1->codigo);
    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", carta1->nome);
    printf("Digite a população da cidade: \n");
    scanf("%lu", &carta1->populacao);
    printf("Digite a área da cidade: \n");
    scanf("%f", &carta1->area);
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &carta1->pib);
    printf("Digite os pontos turísticos da cidade: \n");
    scanf("%d", &carta1->pontosTuristicos);
}

void cadastrarCarta2(Carta *carta2)
{
    printf("\nDigite as informações da segunda carta:\n");
    printf("Digite o código da cidade (ex: A01): \n");
    scanf("%s", carta2->codigo);
    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", carta2->nome);
    printf("Digite a população da cidade: \n");
    scanf("%lu", &carta2->populacao);
    printf("Digite a área da cidade: \n");
    scanf("%f", &carta2->area);
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &carta2->pib);
    printf("Digite os pontos turísticos da cidade: \n");
    scanf("%d", &carta2->pontosTuristicos);
}

float calcularDensidadePopulacional(unsigned long int populacao, float area){
    return populacao / area;
}

float calcularPibPerCapita(float pib, unsigned long int populacao){
    return pib / (float)populacao;
}

float calcularSuperPoder(Carta carta){
    return (float)carta.populacao + carta.area + carta.pib + carta.pontosTuristicos + carta.densidadePopulacional + carta.pibPerCapita;
    
}

int compararCartas(Carta carta1, Carta carta2) {
    printf("População: Carta 1 (%lu) x Carta 2 (%lu)\n", carta1.populacao, carta2.populacao);
    if (carta1.populacao > carta2.populacao)
    {
        printf("Carta 1 venceu\n");
    } else if (carta1.populacao < carta2.populacao)
        {
            printf("Carta 2 venceu\n");
        }
        else
        {
            printf("As cartas estão empatadas\n");
        }

    printf("Área: Carta 1 (%.2f) x Carta 2 (%.2f)\n", carta1.area, carta2.area);
    if (carta1.area > carta2.area)
    {
        printf("Carta 1 venceu\n");
    } else if (carta1.area < carta2.area)
        {
            printf("Carta 2 venceu\n");
        }
        else
        {
            printf("As cartas estão empatadas\n");
        }

    printf("PIB: Carta 1 (%.2f) x Carta 2 (%.2f)\n", carta1.pib, carta2.pib);
    if (carta1.pib > carta2.pib)
    {
        printf("Carta 1 venceu\n");
    } else if (carta1.pib < carta2.pib)
        {
            printf("Carta 2 venceu\n");
        }
        else
        {
            printf("As cartas estão empatadas\n");
        }

    printf("Pontos Turísticos: Carta 1 (%d) x Carta 2 (%d)\n", carta1.pontosTuristicos, carta2.pontosTuristicos);
    if (carta1.pontosTuristicos > carta2.pontosTuristicos)
    {
        printf("Carta 1 venceu\n");
    } else if (carta1.pontosTuristicos < carta2.pontosTuristicos)
        {
            printf("Carta 2 venceu\n");
        }
        else
        {
            printf("As cartas estão empatadas\n");
        }

    printf("Densidade Populacional: Carta 1 (%.2f) x Carta 2 (%.2f)\n", carta1.densidadePopulacional, carta2.densidadePopulacional);
    if (carta1.densidadePopulacional < carta2.densidadePopulacional)
    {
        printf("Carta 1 venceu\n");
    } else if (carta1.densidadePopulacional > carta2.densidadePopulacional)
        {
            printf("Carta 2 venceu\n");
        }
        else
        {
            printf("As cartas estão empatadas\n");
        }

    printf("PIB Per Capita: Carta 1 (%.5f) x Carta 2 (%.5f)\n", carta1.pibPerCapita, carta2.pibPerCapita);
    if (carta1.pibPerCapita > carta2.pibPerCapita)
    {
        printf("Carta 1 venceu\n");
    } else if (carta1.pibPerCapita < carta2.pibPerCapita)
        {
            printf("Carta 2 venceu\n");
        }
        else
        {
            printf("As cartas estão empatadas\n");
        }

    printf("Super Poder: Carta 1 (%.2f) x Carta 2 (%.2f)\n", calcularSuperPoder(carta1), calcularSuperPoder(carta2));
    if (calcularSuperPoder(carta1) > calcularSuperPoder(carta2))
    {
        printf("Carta 1 venceu\n");
    } else if (calcularSuperPoder(carta1) < calcularSuperPoder(carta2))
        {
            printf("Carta 2 venceu\n");
        }
        else
        {
            printf("As cartas estão empatadas\n");
        }
    

    }


void exibirCidade(Carta cidade){
printf("Código: %s\n", cidade.codigo);
printf("Nome: %s\n", cidade.nome);
printf("População: %.2lu habitantes\n", cidade.populacao);
printf("Área: %.2f km²\n", cidade.area);
printf("PIB: %.2f R$\n ", cidade.pib);
printf("Pontos Turísticos: %d\n", cidade.pontosTuristicos);
printf("Densidade Populacional: %.2f hab./km²\n", cidade.densidadePopulacional);
printf("PIB Per Capita: %.5f R$\n", cidade.pibPerCapita);
printf("Super Poder: %.2f\n", calcularSuperPoder(cidade));

}

int main() {
    Carta carta1, carta2;
    cadastrarCarta1(&carta1);
    cadastrarCarta2(&carta2);
    carta1.densidadePopulacional = calcularDensidadePopulacional(carta1.populacao, carta1.area);
    carta1.pibPerCapita = calcularPibPerCapita(carta1.pib, carta1.populacao);
    carta2.densidadePopulacional = calcularDensidadePopulacional(carta2.populacao, carta2.area);
    carta2.pibPerCapita = calcularPibPerCapita(carta2.pib, carta2.populacao);
    printf("##############################\n");
    exibirCidade(carta1);
    printf("------------------------------\n");
    exibirCidade(carta2);
    printf("------------------------------\n");
    compararCartas(carta1, carta2);

}