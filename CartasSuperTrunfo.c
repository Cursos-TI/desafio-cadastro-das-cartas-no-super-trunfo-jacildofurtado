#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    // Variáveis onde ficarão armazenados os atributos da carta 1:
    char estado_1;
    char codigoDaCarta_1[4];
    char nomeDaCidade_1[10];
    int populacao_1;
    float areaDaCidade_1;
    float PIB_1;
    int numDePontoTuristicos_1;

    // Variáveis onde ficarão armazenados os atributos da carta 2:
    char estado_2;
    char codigoDaCarta_2[4];
    char nomeDaCidade_2[10];
    int populacao_2;
    float areaDaCidade_2;
    float PIB_2;
    int numDePontoTuristicos_2;
    
    // Cadastro das Cartas:

    // Carta 1:

    printf("Cadastrar carta 1\n");

    printf("Insira uma letra, de A a H correspondente, ao Estado da carta: \n"); // Requisição para o usuário inserir o dado.
    scanf("%c", &estado_1); // Leitura e armazenamento do dado inserido pelo usuário.

    printf("Insira o código da carta, letra do estado seguida de um número de 01 a 04. Ex: A01: \n");
    scanf("%s", codigoDaCarta_1);

    printf("Insira o nome da cidade: \n");
    scanf("%s", nomeDaCidade_1);

    printf("Insira o número de habitantes: \n");
    scanf("%d", &populacao_1);

    printf("Insira a área da cidade: \n");
    scanf("%f", &areaDaCidade_1);

    printf("Insira o PIB da cidade: \n");
    scanf("%f", &PIB_1);

    printf("Insira o número de pontos turísticos da cidade: \n");
    scanf("%d", &numDePontoTuristicos_1);

    // Carta 2:

    printf("Cadastrar carta 2\n");

    printf("Insira uma letra, de A a H correspondente, ao Estado da carta: \n");
    scanf(" %c", &estado_2);

    printf("Insira o código da carta, letra do estado seguida de um número de 01 a 04. Ex: A01: \n");
    scanf("%s", codigoDaCarta_2);

    printf("Insira o nome da cidade: \n");
    scanf("%s", nomeDaCidade_2);

    printf("Insira o número de habitantes: \n");
    scanf("%d", &populacao_2);

    printf("Insira a área da cidade: \n");
    scanf("%f", &areaDaCidade_2);

    printf("Insira o PIB da cidade: \n");
    scanf("%f", &PIB_2);

    printf("Insira o número de pontos turísticos da cidade: \n");
    scanf("%d", &numDePontoTuristicos_2);
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
