#include <stdio.h>

typedef struct {
    char estado[3];
    char codigo[10];
    char nomeCidade[100];
    int populacao;
    float area; // km²
    float pib;  // bilhões de reais
    int pontosTuristicos;
} Carta;

void exibirCarta(Carta carta) {
    printf("Estado: %s\n", carta.estado);
    printf("Código: %s\n", carta.codigo);
    printf("Cidade: %s\n", carta.nomeCidade);
    printf("População: %d\n", carta.populacao);
    printf("Área: %.2f km²\n", carta.area);
    printf("PIB: %.2f bilhões de reais\n", carta.pib);
    printf("Pontos Turísticos: %d\n", carta.pontosTuristicos);
    printf("-----------------------------\n");
}

int main() {
    // Carta 1
    Carta carta1 = {
        "A",
        "A01",
        "São Paulo",
        12325000,
        1521.11,
        699.28,
        50
    };

    // Carta 2
    Carta carta2 = {
        "B",
        "B02",
        "Rio de Janeiro",
        6748000,
        1200.25,
        300.50,
        30
    };

    printf("Carta 1:\n");
    exibirCarta(carta1);

    printf("Carta 2:\n");
    exibirCarta(carta2);

    return 0;
}
