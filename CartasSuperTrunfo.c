#include <stdio.h>

int main() {

    int populacao, pontos;
    float Area, Pib;
    char Estado[50];
    char codigo[5];
    char Cidade[50];

    printf("Digite Estado: \n");    //Digite Estado permite espaço
    scanf(" %[^\n]", Estado);

    printf("Codigo da Carta: \n");  //Codigo da carta até 5 digitos
    scanf("%s", codigo);

    printf("Nome da Cidade: \n");
    scanf(" %[^\n]", Cidade);  // permite espaço

    printf("Digite populacao: \n"); // Digite populacao sem acentuação
    scanf("%d", &populacao);

    printf("Digite Area: \n"); // Digite Àrea do municipio
    scanf("%f", &Area);

    printf("Digite Pib: \n");   // Digite Pib do municipio
    scanf("%f", &Pib);

    printf("Quantidade de pontos turisticos: \n");  // Quantidade de Pontos turisticos
    scanf("%d", &pontos);

    printf("\n----- DADOS INFORMADOS -----\n"); // Mensagem a ser impressa

    printf("Estado: %s \n", Estado);    // tudo o que vai ser impresso na tela
    printf("Codigo: %s \n", codigo);
    printf("Cidade: %s - Populacao: %d\n", Cidade, populacao);
    printf("Area: %.2f - Pib: %.2f - Pontos Turisticos: %d\n", Area, Pib, pontos);

    return 0;
}
