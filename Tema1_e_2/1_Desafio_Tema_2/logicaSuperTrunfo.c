#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países - Nível Novato
// Sistema de comparação de cartas de cidades

// Definição da estrutura para armazenar as informações de uma carta
typedef struct {
    char codigo[10];
    char nomeCidade[50];
    char estado[30];
    unsigned int populacao;
    double area;
    double pib;
    unsigned int pontosTuristicos;
    double densidadePopulacional;
} Carta;


// Função para calcular a densidade populacional
double calcularDensidade(unsigned int populacao, double area) {
    return (double)populacao / area;
}

int main() {
    // Definição das variáveis para armazenar as cartas
    Carta carta1, carta2;
    
    printf("===== SUPER TRUNFO - CIDADES =====\n");
    printf("Bem-vindo ao jogo de cartas Super Trunfo - Cidades!\n");
    
    // Cadastro da primeira carta
    printf("\n----- Cadastro da Carta 1 -----\n");
    
    printf("Digite o código da carta: ");
    scanf("%s", carta1.codigo);

    
    printf("Digite o nome da cidade: ");
    fgets(carta1.nomeCidade, sizeof(carta1.nomeCidade), stdin);
    carta1.nomeCidade[strcspn(carta1.nomeCidade, "\n")] = '\0'; // Remove a quebra de linha
    
    printf("Digite o estado: ");
    fgets(carta1.estado, sizeof(carta1.estado), stdin);
    carta1.estado[strcspn(carta1.estado, "\n")] = '\0'; // Remove a quebra de linha
    
    printf("Digite a população: ");
    scanf("%u", &carta1.populacao);
    
    printf("Digite a área (km²): ");
    scanf("%lf", &carta1.area);
    
    printf("Digite o PIB (em milhões R$): ");
    scanf("%lf", &carta1.pib);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%u", &carta1.pontosTuristicos);
    
    // Calcular a densidade populacional automaticamente
    carta1.densidadePopulacional = calcularDensidade(carta1.populacao, carta1.area);
    
    printf("\nCarta 1 cadastrada com sucesso!\n");
    printf("Densidade populacional calculada: %.2lf hab/km²\n", carta1.densidadePopulacional);
    
    // Cadastro da segunda carta
    printf("\n----- Cadastro da Carta 2 -----\n");
    
    printf("Digite o código da carta: ");
    scanf("%s", carta2.codigo);

    
    printf("Digite o nome da cidade: ");
    fgets(carta2.nomeCidade, sizeof(carta2.nomeCidade), stdin);
    carta2.nomeCidade[strcspn(carta2.nomeCidade, "\n")] = '\0'; // Remove a quebra de linha
    
    printf("Digite o estado: ");
    fgets(carta2.estado, sizeof(carta2.estado), stdin);
    carta2.estado[strcspn(carta2.estado, "\n")] = '\0'; // Remove a quebra de linha
    
    printf("Digite a população: ");
    scanf("%u", &carta2.populacao);
    
    printf("Digite a área (km²): ");
    scanf("%lf", &carta2.area);
    
    printf("Digite o PIB (em milhões R$): ");
    scanf("%lf", &carta2.pib);
    
    printf("Digite o número de pontos turísticos: ");
    scanf("%u", &carta2.pontosTuristicos);
    
    // Calcular a densidade populacional automaticamente
    carta2.densidadePopulacional = calcularDensidade(carta2.populacao, carta2.area);
    
    printf("\nCarta 2 cadastrada com sucesso!\n");
    printf("Densidade populacional calculada: %.2lf hab/km²\n", carta2.densidadePopulacional);
    
    // Exibir as cartas cadastradas
    printf("\n===== CARTAS CADASTRADAS =====\n");
    
    printf("\n----- Carta 1: %s (%s) -----\n", carta1.nomeCidade, carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("População: %u habitantes\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: R$ %.2f milhões\n", carta1.pib);
    printf("Pontos Turísticos: %u\n", carta1.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta1.densidadePopulacional);
    
    printf("\n----- Carta 2: %s (%s) -----\n", carta2.nomeCidade, carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("População: %u habitantes\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: R$ %.2f milhões\n", carta2.pib);
    printf("Pontos Turísticos: %u\n", carta2.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta2.densidadePopulacional);
    
    // Comparação das cartas com base na população (atributo fixo para o nível Novato)
    printf("\n===== COMPARAÇÃO DAS CARTAS =====\n");
    printf("Comparando por população:\n");
    printf("%s: %u habitantes\n", carta1.nomeCidade, carta1.populacao);
    printf("%s: %u habitantes\n", carta2.nomeCidade, carta2.populacao);
    
    if (carta1.populacao > carta2.populacao) {
        printf("\nResultado: %s vence por ter maior população!\n", carta1.nomeCidade);
    } else if (carta1.populacao < carta2.populacao) {
        printf("\nResultado: %s vence por ter maior população!\n", carta2.nomeCidade);
    } else {
        printf("\nResultado: Empate em população!\n");
    }
    
    // Comparação das cartas com base na área
    printf("\nComparando por área:\n");
    printf("%s: %.2f km²\n", carta1.nomeCidade, carta1.area);
    printf("%s: %.2f km²\n", carta2.nomeCidade, carta2.area);
    
    if (carta1.area > carta2.area) {
        printf("\nResultado: %s vence por ter maior área!\n", carta1.nomeCidade);
    } else if (carta1.area < carta2.area) {
        printf("\nResultado: %s vence por ter maior área!\n", carta2.nomeCidade);
    } else {
        printf("\nResultado: Empate em área!\n");
    }
    
    // Comparação das cartas com base no PIB
    printf("\nComparando por PIB:\n");
    printf("%s: R$ %.2f milhões\n", carta1.nomeCidade, carta1.pib);
    printf("%s: R$ %.2f milhões\n", carta2.nomeCidade, carta2.pib);
    
    if (carta1.pib > carta2.pib) {
        printf("\nResultado: %s vence por ter maior PIB!\n", carta1.nomeCidade);
    } else if (carta1.pib < carta2.pib) {
        printf("\nResultado: %s vence por ter maior PIB!\n", carta2.nomeCidade);
    } else {
        printf("\nResultado: Empate em PIB!\n");
    }
    
    // Comparação das cartas com base nos pontos turísticos
    printf("\nComparando por pontos turísticos:\n");
    printf("%s: %u pontos\n", carta1.nomeCidade, carta1.pontosTuristicos);
    printf("%s: %u pontos\n", carta2.nomeCidade, carta2.pontosTuristicos);
    
    if (carta1.pontosTuristicos > carta2.pontosTuristicos) {
        printf("\nResultado: %s vence por ter mais pontos turísticos!\n", carta1.nomeCidade);
    } else if (carta1.pontosTuristicos < carta2.pontosTuristicos) {
        printf("\nResultado: %s vence por ter mais pontos turísticos!\n", carta2.nomeCidade);
    } else {
        printf("\nResultado: Empate em pontos turísticos!\n");
    }
    
    // Comparação das cartas com base na densidade populacional (menor vence)
    printf("\nComparando por densidade populacional (menor valor vence):\n");
    printf("%s: %.2f hab/km²\n", carta1.nomeCidade, carta1.densidadePopulacional);
    printf("%s: %.2f hab/km²\n", carta2.nomeCidade, carta2.densidadePopulacional);
    
    if (carta1.densidadePopulacional < carta2.densidadePopulacional) {
        printf("\nResultado: %s vence por ter menor densidade populacional!\n", carta1.nomeCidade);
    } else if (carta1.densidadePopulacional > carta2.densidadePopulacional) {
        printf("\nResultado: %s vence por ter menor densidade populacional!\n", carta2.nomeCidade);
    } else {
        printf("\nResultado: Empate em densidade populacional!\n");
    }
    
    printf("\nObrigado por jogar Super Trunfo - Cidades! Até a próxima!\n");

    return 0;
}
