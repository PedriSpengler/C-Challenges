// Faça um programa que controle os estoque de 5 produtos em 5 armazéns de um supermercado, conforme figura abaixo: O programa deverá ler o número da linha e da coluna, correspondente ao produto no armazém, e a quantidade a ser retirada do estoque. Caso a quantidade solicitada for menor ou igual a quantidade em estoque, o programa deverá emitir uma mensagem de atendimento e dar baixa no estoque. Do contrário, emitir mensagem, "Estoque com quantidade insuficiente para atender ao pedido". O programa termina quando o número da linha for igual a -1. Utilize a declaração abaixo para resolver o exercício: int estoque[5][5]= {{150,0,100,150,200}, {200,300,230,100,90}, {250,300,0,200,150}, {300,100,90,450,0},{350,300,400,250,200}}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    int estoque[5][5]= {{150,0,100,150,200}, {200,300,230,100,90}, {250,300,0,200,150}, {300,100,90,450,0},{350,300,400,250,200}};
    int cont = 1;
    int produto = 1;
    
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            printf("Armazem: %d, Produto: %d, QuantidadeProduto: %d\n", cont, produto,estoque[i][j]);
            produto++;
        }
        produto = 1;
        printf("\n");        
        cont++;
    }
    
    int armazem;
    printf("Digite o armazem que deseja selecionar (1 a 5):");
    scanf("%d", &armazem);
    
    for(int i=0; i<5; i++){
        printf("Armazem %d, Produto %d, QuantidadeProduto: %d\n", armazem, i+1, estoque[armazem - 1][i]);
    }
    
    printf("Digite o produto que deseja retirar do estoque:");
    scanf("%d", &produto);
    
    printf("Armazem: %d, Produto: %d, QuantidadeProduto: %d\n", armazem, produto, estoque[armazem - 1][produto - 1]);
    
    int qntRetirar;
    printf("Digite a quantidade de produto que deseja retirar do estoque:\n");
    scanf("%d", &qntRetirar);
    
    if(qntRetirar <= estoque[armazem - 1][produto - 1]){
        estoque[armazem - 1][produto - 1] -= qntRetirar;
        printf("Retirada realizada com sucesso!\nArmazem: %d, Produto: %d, QuantidadeProduto: %d", armazem, produto, estoque[armazem - 1][produto - 1]);
    }else{
        printf("Quantidade de produto insuficiente para retirada!");
        return -1;
    }
    
    
    return 0;
}
