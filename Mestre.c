#include <stdio.h>

int main() {
    // Carta 1
    printf ("Carta nº: 1\n");
    printf ("Estado: Minas Gerais\n");
    printf ("Codigo da Carta: 10\n");
    printf ("Cidade: Governador Valadares\n");
    printf ("População: 281.046\n");
    printf ("Área de Extensão: 2.355 km²\n");
    printf ("PIB: R$ 26.165,06\n");
    printf ("Pontos Turisticos: Pico da Ibituruna\n");

    int Pop1 = 281046;
    float area1 = 2355.0;
    float pib1 = 26165.06;
    float densidade1 = Pop1 / area1;
    float pib_per_capita1 = pib1 / Pop1;
    float SuperPoder1 = Pop1 + area1 + pib1 + pib_per_capita1 + densidade1;

    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: R$ %.2f\n", pib_per_capita1);
    printf("Super Poder da Carta 1: %.2f\n\n", SuperPoder1);

    // Carta 2
    printf ("Carta nº: 2\n");
    printf ("Estado: Bahia\n");
    printf ("Codigo da Carta: 1010\n");
    printf ("Cidade: Porto Seguro\n");
    printf ("População: 164.138\n");
    printf ("Área de Extensão: 2.286 km²\n");
    printf ("PIB: R$ 24.702,76\n");
    printf ("Pontos Turisticos: Praias paradisíacas\n");

    int Pop2 = 164138;
    float area2 = 2286.0;
    float pib2 = 24702.76;
    float densidade2 = Pop2 / area2;
    float pib_per_capita2 = pib2 / Pop2;
    float SuperPoder2 = Pop2 + area2 + pib2 + pib_per_capita2 + densidade2;

    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: R$ %.2f\n", pib_per_capita2);
    printf("Super Poder da Carta 2: %.2f\n\n", SuperPoder2);

    int pontos1 = 0, pontos2 = 0;

    printf("*** COMPARAÇÃO DE DUELO ENTRE AS CARTAS ***\n\n");
    
     if (Pop1 > Pop2) { printf("População: Carta 1 venceu (1)\n"); pontos1++; }
    else             { printf("População: Carta 2 venceu (1)\n"); pontos2++; }

    if (area1 > area2) { printf("Área: Carta 1 venceu (1)\n"); pontos1++; }
    else               { printf("Área: Carta 2 venceu (1)\n"); pontos2++; }

    if (pib1 > pib2) { printf("PIB: Carta 1 venceu (1)\n"); pontos1++; }
    else             { printf("PIB: Carta 2 venceu (1)\n"); pontos2++; }

    printf("Pontos Turísticos: Carta 1 venceu (1)\n");
    pontos1++; // fixo

    if (densidade1 > densidade2) { printf("Densidade: Carta 1 venceu (1)\n"); pontos1++; }
    else                         { printf("Densidade: Carta 2 venceu (1)\n"); pontos2++; }

    if (pib_per_capita1 > pib_per_capita2) { printf("PIB per Capita: Carta 1 venceu (1)\n"); pontos1++; }
    else                                   { printf("PIB per Capita: Carta 2 venceu (1)\n"); pontos2++; }

    if (SuperPoder1 > SuperPoder2) { printf("Super Poder: Carta 1 venceu (1)\n"); pontos1++; }
    else                           { printf("Super Poder: Carta 2 venceu (1)\n"); pontos2++; }

    // Resultado final
    printf("\n=== RESULTADO FINAL ===\n\n");
    printf("Carta 1: %d pontos\n", pontos1);
    printf("Carta 2: %d pontos\n\n", pontos2);

    if (pontos1 > pontos2)      printf("🏆 Carta 1 é a vencedora!\n");
    else if (pontos2 > pontos1) printf("🏆 Carta 2 é a vencedora!\n");
    else                        printf("🤝 Empate entre as cartas!\n");

   
    return 0;
}