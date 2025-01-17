#include <stdio.h>

typedef struct {
    char codigo[4];
    char nome[50];
    float populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
} Cidade;

void cadastrarCidade(Cidade *cidade)
{
    printf("Digite o código da cidade (ex: A01): \n");
    scanf("%s", cidade->codigo);
    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", cidade->nome);
    printf("Digite a população da cidade: \n");
    scanf("%f", &cidade->populacao);
    printf("Digite a área da cidade: \n");
    scanf("%f", &cidade->area);
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &cidade->pib);
    printf("Digite os pontos turísticos da cidade: \n");
    scanf("%d", &cidade->pontosTuristicos);
}

void calcularDensidadePopulacional(Cidade *cidade){
    cidade->densidadePopulacional = cidade->populacao / cidade->area;
}

void calcularPibPerCapita(Cidade *cidade){
    cidade->pibPerCapita = cidade->pib / cidade->populacao;
}

void exibirCidade(Cidade cidade){
printf("Código: %s\n", cidade.codigo);
printf("Nome: %s\n", cidade.nome);
printf("População: %.2f\n", cidade.populacao);
printf("Área: %.2f\n", cidade.area);
printf("PIB: %.2f\n", cidade.pib);
printf("Pontos Turísticos: %d\n", cidade.pontosTuristicos);
printf("Densidade Populacional: %.2f\n", cidade.densidadePopulacional);
printf("PIB Per Capita: %.2f\n", cidade.pibPerCapita);

}

int main() {
    Cidade cidade;
    cadastrarCidade(&cidade);
    calcularDensidadePopulacional(&cidade);
    calcularPibPerCapita(&cidade);
    exibirCidade(cidade);
    return 0;
}