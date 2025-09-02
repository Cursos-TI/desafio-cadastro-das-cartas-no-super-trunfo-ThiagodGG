#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Teste Thiago

int main() {

    //---------------Carta 1-----------------//
    char Estado1;                    //Ex 'A', 'B',... 
    char Codigo1 [4];                //Ex "A01"
    char NomeCidade1[50];            // Nome da Cidade
    unsigned long int População1;    // População da cidade
    float Area1;                     //Area da cidade em Km²
    float PIB1;                      //PIB da cidade
    int NumeroDePontosTuristicos1;   //Pontos turisticos
    float Densidade1;                
    float Pibpc1; 
    float super1;  

    //--------------Carta 2-----------------//
    char Estado2;
    char CodigoDasCartas2[4];
    char NomeDaCidade2[50];
    unsigned long int População2;
    float Area2;
    float PIB2;
    int NumeroDePontosTuristicos2;
    float Densidade2;
    float Pibpc2;
    float super2;

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
    scanf("%lu", &População1);

    printf("Insira a Area da Cidade em  Km²: \n");
    scanf("%f", &Area1);

    printf("Insira o PIB da Cidade em Bilhões de Reais: \n");
    scanf("%f", &PIB1);

    printf("Insira o Numero de Pontos Turisticos: \n");
    scanf("%d", &NumeroDePontosTuristicos1);

    //----------Calculos carta 1---------------------//
    Densidade1 = População1 / Area1; 
    Pibpc1 = PIB1 / População1;
    super1 = (float) População1 + Area1 + PIB1 + NumeroDePontosTuristicos1 + Pibpc1 + (1.0f / Densidade1);

    printf("Densidade populacional: %.2f hab por km2\n", Densidade1);
    printf("PIB per capita: %.3f\n", Pibpc1);
    printf("Super Poder: %.4f\n", super1);

    //-----------Entrada Carta2----------------------//

    printf("\n---------Inserir Carta2----------\n");
    printf("Insira o Estado Ex(A-H): \n");
    scanf(" %c", &Estado2);
    printf("Insira o Codigo da Carta EX(A01): \n");
    scanf(" %s", CodigoDasCartas2);
    printf("Insira o Nome da Cidade: \n");
    scanf(" %[^\n]", &NomeDaCidade2);
    printf("Insira a População: \n");
    scanf(" %lu", &População2);
    printf("Insira a Area da Cidade em km²: \n");
    scanf(" %f", &Area2);
    printf("Insira o PIB da Cidade em Bilhões de Reais: \n");
    scanf(" %f", &PIB2);
    printf("Insira o total de Pontos Turisticos: \n");
    scanf(" %d", &NumeroDePontosTuristicos2);

    //------------Calculos carta 2-------------------//
    Densidade2 = População2 / Area2;
    Pibpc2 = PIB2 / População2; 
    super2 = (float) População2 + Area2 + PIB2 + NumeroDePontosTuristicos2 + Pibpc2 + (1.0f / Densidade2);

    printf("Densidade populacional: %.2f hab por km2\n", Densidade2);
    printf("PIB per capita: %.3f\n", Pibpc2);
    printf("Super Poder: %.4f\n", super2);

    //----------Comparações----------------//
    printf("\nComparação de Cartas:\n");

    printf("População: Carta 1 venceu? %d\n", População1 > População2);
    printf("Area: Carta 1 venceu? %d\n", Area1 > Area2);
    printf("PIB: Carta 1 venceu? %d\n", PIB1 > PIB2);
    printf("Pontos Turisticos: Carta 1 venceu? %d\n", NumeroDePontosTuristicos1 > NumeroDePontosTuristicos2);
    printf("Densidade populacional: Carta 1 venceu? %d\n", Densidade1 > Densidade2);
    printf("PIB per capita: Carta 1 venceu? %d\n", Pibpc1 > Pibpc2);
    printf("Super Poder: Carta 1 venceu? %d\n", super1 > super2);

   

    


    return 0;
}
