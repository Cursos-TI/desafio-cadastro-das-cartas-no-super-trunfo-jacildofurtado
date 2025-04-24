#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

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

    /*O bloco de código a seguir primeiramente imprime uma mensagem (usando 'printf') pedindo para o usuário inserir determinado dado e em seguida lê esse dado inserido (usando 'scanf') e o armazena na variável determinada*/

    // Carta 1:
    printf("Cadastrar carta 1\n"); // Mostra uma mensagem para o usuário cadastrar uma carta.

    printf("\n"); // Deixa uma linha em branco para gerar visualmente no terminal um "pulo de linha".

    printf("Insira uma letra, de A a H correspondente, ao Estado da carta: \n"); // Requisição para o usuário inserir o dado.
    scanf("%c", &estado_1); // Ler e armazena o dado inserido pelo usuário na variável determinada.

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

    printf("\n"); // Deixa uma linha em branco para gerar visualmente no terminal um "pulo de linha".

    // Carta 2:
    printf("Cadastrar carta 2\n"); // Mostra uma mensagem para o usuário cadastrar uma carta.

    printf("Insira uma letra, de A a H correspondente, ao Estado da carta: \n"); // Requisição para o usuário inserir o dado.
    scanf(" %c", &estado_2); // Leitura e armazenamento do dado inserido pelo usuário.

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

    printf("\n"); // Deixa uma linha em branco para gerar visualmente no terminal um "pulo de linha".

    // Exibição dos Dados das Cartas:

    //Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado_1);
    printf("Código: %s\n", codigoDaCarta_1);
    printf("Nome da Cidade: %s\n", nomeDaCidade_1);
    printf("População: %d\n", populacao_1);
    printf("Área: %f km²\n", areaDaCidade_1);
    printf("PIB: %f bilhões de reais\n", PIB_1);
    printf("Número de pontos Turísticos: %d\n\n", numDePontoTuristicos_1);

    printf("\n"); // Deixa uma linha em branco para gerar visualmente no terminal um "pulo de linha".

    //Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado_2);
    printf("Código: %s\n", codigoDaCarta_2);
    printf("Nome da Cidade: %s\n", nomeDaCidade_2);
    printf("População: %d\n", populacao_2);
    printf("Área: %f km²\n", areaDaCidade_2);
    printf("PIB: %f bilhões de reais\n", PIB_2);
    printf("Número de pontos Turísticos: %d\n", numDePontoTuristicos_2);

    return 0; // Encerra o programa.
}
