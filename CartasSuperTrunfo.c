#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    // Definição de variáveis para os atributos da cidade
    
    int codigoCidade = 200;
    char nomeCidade[50] = "Santa Catarina";
    long int populacao = 12300000;
    float area = 1521.11; // em km²
    double pib = 2370000000000.00;
    int pontosTuristicos = 100;

    // Exibição das informações da cidade
    printf("Informações da Cidade:\n");
    printf("Código: %d\n", codigoCidade);
    printf("Nome: %s\n", nomeCidade);
    printf("População: %ld habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: R$ %.2lf\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos);


    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
