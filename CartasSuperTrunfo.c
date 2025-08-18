#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Teste Thiago

int main() {

    // --------------Carta 1-------------------------
    char Estado1;                    //Ex 'A', 'B',... 
    char Codigo1 [4];                //Ex "A01"
    char NomeCidade1[50];            // Nome da Cidade
    int População1;                  // População da cidade
    float Area1;                     //Area da cidade em Km²
    float PIB1;                      //PIB da cidade
    int NumeroDePontosTuristicos1;   //Pontos turisticos

    //--------------Carta 2-----------------------------
    char Estado2;
    char CodigoDasCartas2[4];
    char NomeDaCidade2[50];
    int População2;
    float Area2;
    float PIB2;
    int NumeroDePontosTuristicos2;

    printf("Super Trunfo - Cadastro de Cartas");

    //----------------Entrada Carta1------------------//
    printf("\n------Inserir Carta 1-------\n");

    printf("insira o Estado: Ex(A-H): \n");
    scanf("%c", &Estado1);

    printf("Insira o Codigo da Carta Ex(A01): \n");
    scanf("%s", Codigo1);

    printf("Insira o Nome da Cidade: \n");
    scanf(" %[^\n]", NomeCidade1);

    printf("Insira a População: \n");
    scanf("%d", &População1);

    printf("Insira a Area da Cidade em  Km²: \n");
    scanf("%f", &Area1);

    printf("Insira o PIB da Cidade em Bilhões de Reais: \n");
    scanf("%f", &PIB1);

    printf("Insira o Numero de Pontos Turisticos: \n");
    scanf("%d", &NumeroDePontosTuristicos1);

    //-----------Entrada Carta2----------------------//

    printf("\n---------Inserir Carta2----------\n");
    printf("Insira o Estado Ex(A-H): \n");
    scanf(" %c", &Estado2);
    printf("Insira o Codigo da Carta EX(A01): \n");
    scanf(" %s", CodigoDasCartas2);
    printf("Insira o Nome da Cidade: \n");
    scanf(" %[^\n]", &NomeDaCidade2);
    printf("Insira a População: \n");
    scanf(" %d", &População2);
    printf("Insira a Area da Cidade em km²: \n");
    scanf(" %f", &Area2);
    printf("Insira o PIB da Cidade em Bilhões de Reais: \n");
    scanf(" %f", &PIB2);
    printf("Insira o total de Pontos Turisticos: \n");
    scanf(" %d", &NumeroDePontosTuristicos2);
























    return 0;
}
