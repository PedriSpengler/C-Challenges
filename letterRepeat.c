// Faça um programa que receba uma frase (máximo 100 caracteres) e uma letra qualquer, calcule e mostre a quantidade que essa letra aparece na frase digitada. Para descobrir o tamanho da frase digitada utilize a função strlen(cadeia de caracteres).Ao final, exibir o estoque (matriz). Dica: Usar a função gets(cadeia de caracteres) - biblioteca sring.h para realizar a leitura da frase. A função scanf só realiza leitura até o primeiro espaço em branco.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int buscaLetra(char *frase, char *letra){
    int aparicao = 0; 
    for(int i = 0; i < strlen(frase); i++){
        if(*letra == frase[i]){
            aparicao += 1;
        }
    }
    return aparicao;
}

int main()
{
    char frase[100];
    char letra;
    printf("Digite uma frase com no maximo 100 caracteres:");
    fgets(frase, sizeof(frase), stdin);
    
    printf("Digite a letra que deseja procurar quantas vezes aparece na frase digitada:");
    scanf("%c", &letra);
    
    int vezes = buscaLetra(frase, &letra);
    
    printf("A letra %c, apareceu %d vezes na frase digitada.", letra, vezes);
    
    
    
    return 0;
}
