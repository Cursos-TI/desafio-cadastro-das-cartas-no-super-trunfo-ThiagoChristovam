#include <stdio.h>

int main() {

 printf("desafio super trunfo\n\n");

 printf("digite informções do primeiro país\n\n");

char estado[20];
char codigo_da_carta[10];
char nome_da_cidade[20];
int população;
float area;
float PIB;
int numero_ponto_turistico;

printf("digite estado: \n");
scanf("%s", estado);

printf("digite codigo da carta: \n");
scanf("%s", codigo_da_carta);

printf("digite nome da cidade: \n");
scanf("%s", nome_da_cidade);

printf("digite população: \n");
scanf("%d", &população);

printf("digite area: \n");
scanf("%f", &area);

printf("digite PIB: \n");
scanf("%f", &PIB);

printf("digite numero ponto turistico: \n");
scanf("%d", &numero_ponto_turistico);

printf("nome do estado: %s\n",estado);
printf("codigo da carta: %s\n",codigo_da_carta);
printf("nome da cidade: %s\n",nome_da_cidade);
printf("numero da população: %d\n",população);
printf("area: %f\n",area);
printf("PIB: %f\n",PIB);
printf("numero de ponto turistico: %d\n",numero_ponto_turistico);


    return 0;
}
