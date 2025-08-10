#include <stdio.h>

int main(){

    int idade;
    float altura;
    char nome [50];
    int matricula;

        printf ("Qual é a sua idade? \n");
        scanf("%d", &idade);

        printf("Qual é a sua altura? \n");
        scanf("%f", &altura);

        printf("Qual o seu nome? \n");
        scanf("%s", &nome);

        printf("Qual a sua matrícula? \n");
        scanf("%d", &matricula);

        printf(" Nome: %s \n Altura: %.2f metros\n Idade: %d anos\n Matrícula: %d", nome, altura, idade, matricula);


    return 0;

