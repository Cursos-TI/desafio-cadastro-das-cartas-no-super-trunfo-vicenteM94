#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    char codigo[4];
    char nome[50];
    float populacao;
    float area;
    float pib;
    float densidadePopulacional;
    float pibPerCapita;
    int pontosTuristicos;

    printf("Digite o código da cidade (ex: A01): \n");
    scanf("%s", codigo);
    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", nome);
    printf("Digite a população da cidade: \n");
    scanf("%f", &populacao);
    printf("Digite a área da cidade: \n");
    scanf("%f", &area);
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib);
    printf("Digite os pontos turísticos da cidade: \n");
    scanf("%d", &pontosTuristicos);

    densidadePopulacional = populacao / area;
    pibPerCapita = pib / populacao;

    printf("Código: %s\n", codigo);
    printf("Nome: %s\n", nome);
    printf("População: %.2f\n", populacao);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2f\n", pib);
    printf("Pontos Turísticos: %d\n", pontosTuristicos);
    printf("Densidade Populacional: %.2f\n", densidadePopulacional);
    printf("PIB Per Capita: %.2f\n", pibPerCapita);    

    return 0;
}
