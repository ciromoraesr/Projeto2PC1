#include <stdio.h>
#include <stdlib.h>
#include "mopera.h"

//definindo a função store que armazena o conteúdo do registrador de índice op1 na memória de índice op2
void store(char op1[], char op2[], int reg[], int mem[]){
    op1[0] = '0';
    op2[0] = '0';
    mem[atoi(op2)] = reg[atoi(op1)];
}
//função load que armazena o conteúde de memória de índice op2 no registrador de índice op1
void load(char op1[], char op2[], int reg[], int mem[]){
    op1[0] = '0';
    op2[0] = '0';
    reg[atoi(op1)] = mem[atoi(op2)];
}

