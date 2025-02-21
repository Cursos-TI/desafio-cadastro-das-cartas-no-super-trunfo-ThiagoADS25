#include <stdio.h>
int main() {
    int populacao1, populacao2; //Declara o numero de habitantes na cidade 1 e 2
    int pontos1, pontos2; // Declara a quantidade de pontos turísticos na cidade 1 e 2
    float area1, area2; // Declara a área da cidade 1 e 2 em km²
    float pib1, pib2; // Declara o PIB (Produto Interno Bruto) da cidade 1 e 2
    char nome1[50], nome2[50]; // Declara o mome da Cidade 1 e 2
    char opcao1, opcao2; // Declara a letra correspondente a cidade 1 e 2 de 'A' a 'H'
    char codigo1[20], codigo2[20]; // Declara o código numerico de 01 a 04 para a cidade 1 e 2

    // LEITURA DA CARTA 1


    printf("VAMOS MONTAR JUNTOS NOSSAS CARTAS 'SUPER TRUNFO'?\n"); // Mensagem informativa
    printf("NOSSA PRIMEIRA ETAPA É MONTAR A PRIMEIRA CARTA DO JOGO!\n"); // Mensagem informativa
    printf("FIQUE ATENTO AOS CAMPOS DE PREENCHIMENTO PARA QUE POSSAMOS\n"); // Mensagem informativa
    printf("PREENCHER CONFORME SOLICITADO EM CADA LINHA.\n"); // Mensagem informativa
    printf("ENTÃO VAMOS NESSA!!!\n"); // Mensagem informativa
    printf("\n"); // Pular linha
    printf("---------------------------------------------------\n"); // Colocando um tracejado entre as informações para separar
    printf("\n"); // Pular linha
    printf("Digite a letra do Estado da 1ª carta (A a H): ");
    scanf("%c", &opcao1);
    printf("Digite o Código da 1ª Carta (01 a 04): ");
    scanf("%s", &codigo1);
    printf("Digite o nome da cidade da 1ª Carta (Nomes simples. ex.: SALVADOR): ");
    scanf("%s", &nome1);
    printf("Digite a quatidade de habitantes da cidade da 1ª Carta (Número inteiro): ");
    scanf("%d", &populacao1);
    printf("Digite o tamanho da área em km² da cidade da 1ª Carta (Número inteiro): ");
    scanf("%f", &area1);
    printf("Digite o valor do PIB da cidade da 1ª Carta (Número inteiro): ");
    scanf("%f", &pib1);
    printf("Digite quantos pontos turísticos tem na cidade da 1ª Carta (Número inteiro): ");
    scanf("%d", &pontos1);


    // IMPRESSÃO DA CARTA 1


    printf("\n"); // Pular linha
    printf("---------------------------------------------------\n"); // Colocando um tracejado entre as informações para separar
    printf("\n"); // Pular linha
    printf("Carta 1:\n"); //Esta é a Carta 1 do jogo
    printf("Estado: %c\n", opcao1); //Campo para a informação da letra do Estado
    printf("Código: %c%s\n", opcao1, codigo1); //Campo para a informação do Códico com a letra do Estado e o número da carta
    printf("Nome da cidade: %s\n", nome1); //Campo para a informação do nome da cidade (Nome simple, ex.: FORTALEZA)
    printf("População: %d\n", populacao1); //Campo para a informação do número da população
    printf("Área: %.2f km²\n", area1); //Campo para a informação do tamanho da área da cidade informada acima em Km²
    printf("PIB: %.2f\n", pib1); //Campo para a informação do PIB (Produto Interno Bruto)
    printf("Numero de Pontos Turísticos: %d\n", pontos1); //Campo para a informação de quantos pontos turístico existem na cidade (Aproximadamente)
    printf("\n"); // Pular linha
    printf("---------------------------------------------------\n"); // Colocando um tracejado entre as informações para separar
    printf("\n"); // Pular linha


    // LEITURA DA CARTA 2


    printf("UHUUU!!! CHEGAMOS A NOSSA SEGUNDA CARTA\n"); // Mensagem informativa
    printf("NA SEGUNDA CARTA, MANTEREMOS O MESMO PADRÃO DE CADASTRAMENTO.\n"); // Mensagem informativa
    printf("USAREMOS INFORMAÇÕES DE UMA OUTRA CIDADE E ESTADO COM\n"); // Mensagem informativa
    printf("CÓDIGOS DIFERENTES DA PRIMEIRA CARTA.\n"); // Mensagem informativa
    printf("ENTÃO, MÃOS A OBRA!!!\n"); // Mensagem informativa
    printf("\n"); // Pular linha
    printf("---------------------------------------------------\n"); // Colocando um tracejado entre as informações para separar
    printf("\n"); // Pular linha
    printf("Digite a letra do Estado da 2ª carta (A a H): ");
    scanf("%s", &opcao2);
    printf("Digite o Código da 2ª Carta (01 a 04): ");
    scanf("%s", &codigo2);
    printf("Digite o nome da cidade da 2ª Carta (Nomes simples. ex.: SALVADOR): ");
    scanf("%s", &nome2);
    printf("Digite a quatidade de habitantes da cidade da 2ª Carta (Número inteiro): ");
    scanf("%d", &populacao2);
    printf("Digite o tamanho da área em km² da cidade da 2ª Carta (Número inteiro): ");
    scanf("%f", &area2);
    printf("Digite o valor do PIB da cidade da 2ª Carta (Número inteiro): ");
    scanf("%f", &pib2);
    printf("Digite quantos pontos turísticos tem na cidade da 2ª Carta (Número inteiro): ");
    scanf("%d", &pontos2);    


    // IMPRESSÃO DA CARTA 2


    printf("\n"); // Pular linha
    printf("---------------------------------------------------\n"); // Colocando um tracejado entre as informações para separar
    printf("\n"); // Pular linha
    printf("Carta 2:\n"); //Esta é a Carta 2 do jogo
    printf("Estado: %c\n", opcao2); //Campo para a informação da letra do Estado
    printf("Código: %c%s\n", opcao2, codigo2); //Campo para a informação do Códico com a letra do Estado e o número da carta
    printf("Nome da cidade: %s\n", nome2); //Campo para a informação do nome da cidade (Nome simple, ex.: FORTALEZA)
    printf("População: %d\n", populacao2); //Campo para a informação do número da população
    printf("Área: %.2f km²\n", area2); //Campo para a informação do tamanho da área da cidade informada acima em Km²
    printf("PIB: %.2f\n", pib2); //Campo para a informação do PIB (Produto Interno Bruto)
    printf("Numero de Pontos Turísticos: %d\n", pontos2); //Campo para a informação de quantos pontos turístico existem na cidade (Aproximadamente)
    printf("\n"); // Pular linha
    printf("---------------------------------------------------\n"); // Colocando um tracejado entre as informações para separar
    printf("\n"); // Pular linha


    /*
    printf(“%formato1 %formato2”, variável1, variável2);
    %d: Imprime um inteiro no formato decimal.
    %i: Equivalente a %d.
    %f: Imprime um número de ponto flutuante no formato padrão.
    %e: Imprime um número de ponto flutuante na notação científica.
    %c: Imprime um único caractere.
    %s: Imprime uma cadeia (string) de caracteres.
    '\n' é um caractere de nova linha
    INFORMAÇÕES SOBRE A MISSÃO SUPER TRUNFO:
    Estado: Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char
    
    Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[]
    Nome da Cidade: O nome da cidade. Tipo: char[] (string)
    População: O número de habitantes da cidade. Tipo: int
 
    Área (em km²): A área da cidade em quilômetros quadrados. Tipo: float
    PIB: O Produto Interno Bruto da cidade. Tipo: float
    Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade. Tipo: int
    
    */


}
