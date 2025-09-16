#include <stdio.h>

int main() {
    // Declaração das variáveis
    int populacao;
    float area;
    float pib_milhoes;  // PIB em milhões
    float pib_total;    // PIB em reais
    float densidadePopulacional;
    float pibPerCapita;

    // Carta 1
    printf("Carta nº: 1\n");
    printf("Estado: Minas Gerais\n");
    printf("Codigo da Carta: 10\n");
    printf("Cidade: Governador Valadares\n");

    populacao = 281046;
    area = 2355.0;
    pib_milhoes = 26165.06;  // PIB em milhões de reais

    printf("População: %d\n", populacao);
    printf("Área de Extensão: %.0f km²\n", area);
    printf("PIB: R$ %.2f milhões\n", pib_milhoes);
    printf("Pontos Turísticos: Pico da Ibituruna\n");

    // Cálculos
    pib_total = pib_milhoes * 1000000.0;
    densidadePopulacional = populacao / area;
    pibPerCapita = pib_total / populacao;

    // Resultados
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional);
    printf("PIB per Capita: R$ %.2f\n\n", pibPerCapita);

    // Carta 2
    printf("Carta nº: 2\n");
    printf("Estado: Bahia\n");
    printf("Codigo da Carta: 1010\n");
    printf("Cidade: Porto Seguro\n");

    populacao = 164138;
    area = 2286.0;
    pib_milhoes = 24702.76;

    printf("População: %d\n", populacao);
    printf("Área de Extensão: %.0f km²\n", area);
    printf("PIB: R$ %.2f milhões\n", pib_milhoes);
    printf("Pontos Turísticos: Praias paradisíacas\n");

    // Cálculos
    pib_total = pib_milhoes * 1000000.0;
    densidadePopulacional = populacao / area;
    pibPerCapita = pib_total / populacao;

    // Resultados
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita);

    return 0;
}
