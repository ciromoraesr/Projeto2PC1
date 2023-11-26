#include <stdio.h>
#include <stdlib.h>
#include "saida.h"
//função que imprime o valor do registrador de índice op1
void imprime(char op1[], int reg[]){
    op1[0] = '0';
    printf("\n%d", reg[atoi(op1)]);
}
//função saída que atualiza o índice de leitura para a última linha e termina o programa quando lida
void exits(int n, int *i){
    *i =  n-1;
}
