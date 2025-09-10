#include <stdio.h>

// DESENVOLVIDO POR TAWAN MATOS

// DECLARAÇÃO DE TODAS AS VARIÁVEIS
//===============================

int main()
{
    char estado[50];
    char codigo[20];
    char nomecidade[50];
    int populacao;
    float area;
    float pib;
    int prontos_turisticos;

    char estado2[50];
    char codigo2[20];
    char nomecidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int prontos_turisticos2;

    // JOGO SUPER TRUNFO NA LINGUAGEM "C".
    //==================================
    printf("========Super jogo de Trunfo======== \n");

    printf("========card 1============\n");
    /*
    PEDE PARA QUE O USUÁRIO DIGITE O NOME DO ESTADO
     EM SEGUIDA MOSTRA O NOME QUE O USUÁRIO ESCREVEU
    */
    printf("Digite o Nome do Estado: \n");
    scanf("%s", &estado); // VARIÁVEL QUE ARMAZENOU OQUE FOI DIGITADO ACIMA
    //===========FIM=====================

    /*
    PEDE PARA QUE O USUÁRIO DIGITE O CÓDIGO DA CARTA
     EM SEGUIDA MOSTRA O NOME QUE O USUÁRIO ESCREVEU
    */
    printf("Digite o código do estado: \n");
    scanf("%s", &codigo); // VARIÁVEL QUE ARMAZENOU OQUE FOI DIGITADO ACIMA
    //=============FIM======================

    /*
    PEDE PARA QUE O USUÁRIO DIGITE O NOME DA CIDADE
     EM SEGUIDA MOSTRA O NOME QUE O USUÁRIO ESCREVEU
    */
    printf("Digite o nome da cidade: \n");
    scanf("%s", &nomecidade); // VARIÁVEL QUE ARMAZENOU OQUE FOI DIGITADO ACIMA
    //=============FIM======================

    /*
    PEDE PARA QUE O USUÁRIO DIGITE O NÚMERO POPULACIONAL DA CIDADE
     EM SEGUIDA MOSTRA O NOME QUE O USUÁRIO ESCREVEU
    */
    printf("Digite o número populacional da cidade: \n");
    scanf("%d", &populacao);
    //=============FIM======================

    printf("Digite a área da sua cidade em km²: \n");
    scanf("%f", &area);
    //=============FIM======================

    printf("Digite o produto interno bruto da sua cidade (PIB): \n");
    scanf("%f", &pib);
    //=============FIM======================

    printf("Digite a quantidade de pontos turísticos de sua cidade: \n");
    scanf("%d", &prontos_turisticos);
    //=============FIM======================

    // card número 02
    printf("========card 02============\n");
    /*
    PEDE PARA QUE O USUÁRIO DIGITE O NOME DO ESTADO
     EM SEGUIDA MOSTRA O NOME QUE O USUÁRIO ESCREVEU
    */
    printf("Digite o Nome do Estado: \n");
    scanf("%s", &estado2); // VARIÁVEL QUE ARMAZENOU OQUE FOI DIGITADO ACIMA
    //===========FIM=====================

    /*
    PEDE PARA QUE O USUÁRIO DIGITE O CÓDIGO DA CARTA
     EM SEGUIDA MOSTRA O NOME QUE O USUÁRIO ESCREVEU
    */
    printf("Digite o código do estado: \n");
    scanf("%s", &codigo2); // VARIÁVEL QUE ARMAZENOU OQUE FOI DIGITADO ACIMA
    //=============FIM======================

    /*
    PEDE PARA QUE O USUÁRIO DIGITE O NOME DA CIDADE
     EM SEGUIDA MOSTRA O NOME QUE O USUÁRIO ESCREVEU
    */
    printf("Digite o nome da cidade: \n");
    scanf("%s", &nomecidade2); // VARIÁVEL QUE ARMAZENOU OQUE FOI DIGITADO ACIMA
    //=============FIM======================

    /*
    PEDE PARA QUE O USUÁRIO DIGITE O NÚMERO POPULACIONAL DA CIDADE
     EM SEGUIDA MOSTRA O NOME QUE O USUÁRIO ESCREVEU
    */
    printf("Digite o número populacional da cidade: \n");
    scanf("%d", &populacao2);
    //=============FIM======================

    printf("Digite a área da sua cidade em km²: \n");
    scanf("%f", &area2);
    //=============FIM======================

    printf("Digite o produto interno bruto da sua cidade (PIB): \n");
    scanf("%f", &pib2);
    //=============FIM======================

    printf("Digite a quantidade de pontos turísticos de sua cidade: \n");
    scanf("%d", &prontos_turisticos2);
    //=============FIM======================


    // ===== MOSTRAR RESULTADOS =====
    printf("\n================= RESULTADOS =================\n");

    printf("\n---- Card 1 ----\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n", codigo);
    printf("Cidade: %s\n", nomecidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Pontos turísticos: %d\n", prontos_turisticos);

    printf("\n---- Card 2 ----\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", nomecidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", prontos_turisticos2);

    printf("FIM DO JOGO" \N);

    return 0;
}