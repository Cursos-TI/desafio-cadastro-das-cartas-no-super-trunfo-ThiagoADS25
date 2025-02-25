#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída
int main() { // Função principal
    // Declaração de variáveis da carta 1
    unsigned long int populacao1, populacao2; //Declara o numero de habitantes na cidade 1 e 2
    int pontos1, pontos2; // Declara a quantidade de pontos turísticos na cidade 1 e 2
    float area1, area2; // Declara a área da cidade 1 e 2 em km²
    float pib1, pib2; // Declara o PIB (Produto Interno Bruto) da cidade 1 e 2
    char nome1[50], nome2[50]; // Declara o mome da Cidade 1 e 2
    char opcao1, opcao2; // Declara a letra correspondente a cidade 1 e 2 de 'A' a 'H'
    char codigo1[2], codigo2[2]; // Declara o código numerico de 01 a 04 para a cidade 1 e 2
    float densidade1, densidade2; // Declara a densidade populacional da cidade 1 e 2
    float pibcapita1, pibcapita2; // Declara o PIB per capita da cidade 1 e 2
    float superpoder1, superpoder2; // Declara o superpoder da cidade 1 e 2


    // LEITURA DA CARTA 1


    printf("VAMOS MONTAR JUNTOS NOSSAS CARTAS 'SUPER TRUNFO'?\n"); // Mensagem informativa
    printf("NOSSA PRIMEIRA ETAPA É MONTAR A PRIMEIRA CARTA DO JOGO!\n"); // Mensagem informativa
    printf("FIQUE ATENTO AOS CAMPOS DE PREENCHIMENTO PARA QUE POSSAMOS\n"); // Mensagem informativa
    printf("PREENCHER CONFORME SOLICITADO EM CADA LINHA.\n"); // Mensagem informativa
    printf("ENTÃO VAMOS NESSA!!!\n"); // Mensagem informativa
    printf("\n"); // Pular linha
    printf("---------------------------------------------------\n"); // Colocando um tracejado entre as informações para separar
    printf("\n"); // Pular linha
    printf("Digite a letra do Estado da 1ª carta (A a H): "); // Solicita a letra do Estado da carta 1
    scanf("%c", &opcao1); // Lê a letra do Estado da carta 1
    printf("Digite o Código da 1ª Carta (01 a 04): "); // Solicita o código da carta da carta 1
    scanf("%s", &codigo1); // Lê o código da carta da carta 1
    printf("Digite o nome da cidade da 1ª Carta (Nomes simples. ex.: SALVADOR): "); // Solicita o nome da cidade da carta 1
    scanf("%s", &nome1); // Lê o nome da cidade da carta 1
    printf("Digite a quantidade de habitantes da cidade da 1ª Carta (Número inteiro): "); // Solicita o número de habitantes da carta 1
    scanf("%ld", &populacao1); // Lê o número de habitantes da carta 1
    printf("Digite o tamanho da área em km² da cidade da 1ª Carta (Número inteiro): "); // Solicita o tamanho da área da carta 1
    scanf("%f", &area1); // Lê o tamanho da área da carta 1
    printf("Digite o valor do PIB da cidade da 1ª Carta (Número inteiro): "); // Solicita o valor do PIB da carta 1
    scanf("%f", &pib1); // Lê o valor do PIB da carta 1
    printf("Digite quantos pontos turísticos tem na cidade da 1ª Carta (Número inteiro): "); // Solicita a quantidade de pontos turísticos da carta 1
    scanf("%d", &pontos1); // Lê a quantidade de pontos turísticos da carta 1
    densidade1 = (float)(populacao1 / area1); // Calculo da densidade populacional da carta 1
    pibcapita1 = (float)(pib1 / populacao1); // Calculo do PIB per capita da carta 1
    superpoder1 = (float)(area1 + pib1 + populacao1 + pibcapita1 + pontos1 - densidade1); // Calculo do superpoder da carta 1

    // IMPRESSÃO DA CARTA 1


    printf("\n"); // Pular linha
    printf("---------------------------------------------------\n"); // Colocando um tracejado entre as informações para separar
    printf("\n"); // Pular linha
    printf("Carta 1:\n"); //Esta é a Carta 1 do jogo
    printf("Estado: %c\n", opcao1); //Campo para a informação da letra do Estado da carta 1
    printf("Código: %c%s\n", opcao1, codigo1); //Campo para a informação do Códico com a letra do Estado e o número da carta da carta 1
    printf("Nome da cidade: %s\n", nome1); //Campo para a informação do nome da cidade da carta 1 (Nome simple, ex.: FORTALEZA)
    printf("População: %ld\n", populacao1); //Campo para a informação do número da população da carta 1
    printf("Área: %.2f km²\n", area1); //Campo para a informação do tamanho da área da cidade  da carta 1 informada acima em Km²
    printf("PIB: %.2f reais\n", pib1); //Campo para a informação do PIB (Produto Interno Bruto) da carta 1
    printf("Numero de Pontos Turísticos: %d\n", pontos1); //Campo para a informação de quantos pontos turístico existem na cidade  da carta 1(Aproximadamente)
    printf("Densidade populacional: %.2f hab/km²\n", densidade1); //Campo para a informação da densidade populacional da cidade da carta 1
    printf("PIB per capita: %.2f reais\n", pibcapita1); //Campo para a informação do PIB per capita da cidade da carta 1
    printf("Superpoder: %.2f\n", superpoder1); //Campo para a informação do superpoder da cidade da carta 1
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
    printf("Digite a letra do Estado da 2ª carta (A a H): "); // Solicita a letra do Estado da carta 2
    scanf("%s", &opcao2); // Lê a letra do Estado da carta 2
    printf("Digite o Código da 2ª Carta (01 a 04): "); // Solicita o código da carta da carta 2
    scanf("%s", &codigo2); // Lê o código da carta da carta 2
    printf("Digite o nome da cidade da 2ª Carta (Nomes simples. ex.: SALVADOR): "); // Solicita o nome da cidade da carta 2
    scanf("%s", &nome2); // Lê o nome da cidade da carta 2
    printf("Digite a quantidade de habitantes da cidade da 2ª Carta (Número inteiro): "); // Solicita o número de habitantes da carta 2
    scanf("%ld", &populacao2); // Lê o número de habitantes da carta 2
    printf("Digite o tamanho da área em km² da cidade da 2ª Carta (Número inteiro): "); // Solicita o tamanho da área da carta 2
    scanf("%f", &area2); // Lê o tamanho da área da carta 2
    printf("Digite o valor do PIB da cidade da 2ª Carta (Número inteiro): "); // Solicita o valor do PIB da carta 2
    scanf("%f", &pib2); // Lê o valor do PIB da carta 2
    printf("Digite quantos pontos turísticos tem na cidade da 2ª Carta (Número inteiro): "); // Solicita a quantidade de pontos turísticos da carta 2
    scanf("%d", &pontos2); // Lê a quantidade de pontos turísticos da carta 2
    densidade2 = (float)(populacao2 / area2); // Calculo da densidade populacional da carta 2
    pibcapita2 = (float)(pib2 / populacao2); // Calculo do PIB per capita da carta 2
    superpoder2 = (float)(area2 + pib2 + populacao2 + pibcapita2 + pontos2 - densidade2); // Calculo do superpoder da carta 2


    // IMPRESSÃO DA CARTA 2


    printf("\n"); // Pular linha
    printf("---------------------------------------------------\n"); // Colocando um tracejado entre as informações para separar
    printf("\n"); // Pular linha
    printf("Carta 2:\n"); //Esta é a Carta 2 do jogo
    printf("Estado: %c\n", opcao2); //Campo para a informação da letra do Estado
    printf("Código: %c%s\n", opcao2, codigo2); //Campo para a informação do Códico com a letra do Estado e o número da carta
    printf("Nome da cidade: %s\n", nome2); //Campo para a informação do nome da cidade (Nome simple, ex.: FORTALEZA)
    printf("População: %ld\n", populacao2); //Campo para a informação do número da população
    printf("Área: %.2f km²\n", area2); //Campo para a informação do tamanho da área da cidade informada acima em Km²
    printf("PIB: %.2f reais\n", pib2); //Campo para a informação do PIB (Produto Interno Bruto)
    printf("Numero de Pontos Turísticos: %d\n", pontos2); //Campo para a informação de quantos pontos turístico existem na cidade (Aproximadamente)
    printf("Densidade populacional: %.2f hab/km²\n", densidade2); //Campo para a informação da densidade populacional da cidade da carta 2
    printf("PIB per capita: %.2f reais\n", pibcapita2); //Campo para a informação do PIB per capita da cidade da carta 2
    printf("Superpoder: %.2f\n", superpoder2); //Campo para a informação do superpoder da cidade da carta 2
    printf("\n"); // Pular linha
    printf("---------------------------------------------------\n"); // Colocando um tracejado entre as informações para separar
    printf("\n"); // Pular linha

    printf("SUAS INFORMAÇÕES FORAM CADASTRADAS COM SUCESSO!!!\n"); // Mensagem informativa
    printf("OBRIGADO POR PARTICIPAR!!!\n"); // Mensagem informativa
    printf("SEGUEM AS ABAIXO COMPARAÇÕES DAS CARTAS CADASTRADAS:\n"); // Mensagem informativa
    printf("\n"); // Pular linha
    printf("---------------------------------------------------\n"); // Colocando um tracejado entre as informações para separar
    printf("\n"); // Pular linha

    // COMPARAÇÃO DAS CARTAS
    printf("Comparação de Cartas:\n"); // Mensagem informativa
    printf("População: %d\n", populacao1 > populacao2); // Comparação da população da carta 1 com a população da carta 2
    printf("Área: %d\n", area1 > area2); // Comparação da área da carta 1 com a área da carta 2
    printf("PIB: %d\n", pib1 > pib2); // Comparação do PIB da carta 1 com o PIB da carta 2
    printf("Pontos Turísticos: %d\n", pontos1 > pontos2); // Comparação da quantidade de pontos turísticos da carta 1 com a quantidade de pontos turísticos da carta 2
    printf("Densidade Populacional: %d\n", densidade1 < densidade2); // Comparação da densidade populacional da carta 1 com a densidade populacional da carta 2
    printf("PIB per Capita: %d\n", pibcapita1 > pibcapita2); // Comparação do PIB per capita da carta 1 com o PIB per capita da carta 2
    printf("Super Poder: %d\n", superpoder1 > superpoder2); // Comparação do superpoder da carta 1 com o superpoder da carta 2
    printf("\n"); // Pular linha
    printf("---------------------------------------------------\n"); // Colocando um tracejado entre as informações para separar
    printf("\n"); // Pular linha
    printf("OBRIGADO POR PARTICIPAR!!!\n"); // Mensagem informativa
    printf("\n"); // Pular linha

    return 0; // Retorna 0 para o sistema operacional

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