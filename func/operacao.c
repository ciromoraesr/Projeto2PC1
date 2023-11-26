#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "operacao.h"
//definindo as operações aritméticas básicas que são soma, subtração, multiplicação  e módulo
void add(char op1[], char op2[], char op3[], int reg[]){
    op1[0] = '0';
    op2[0] = '0';
    op3[0] = '0';
    reg[atoi(op1)] = reg[atoi(op2)] + reg[atoi(op3)];
}
void sub(char op1[], char op2[], char op3[], int reg[]){
    op1[0] = '0';
    op2[0] = '0';
    op3[0] = '0';
    reg[atoi(op1)] = reg[atoi(op2)] - reg[atoi(op3)];
}
void mul(char op1[], char op2[], char op3[], int reg[]){
    op1[0] = '0';
    op2[0] = '0';
    op3[0] = '0';
    reg[atoi(op1)] = reg[atoi(op2)] * reg[atoi(op3)];
}
void divisao(char op1[], char op2[], char op3[], int reg[]){
    op1[0] = '0';
    op2[0] = '0';
    op3[0] = '0';
    reg[atoi(op1)] = reg[atoi(op2)] / reg[atoi(op3)];
}
void mod(char op1[], char op2[], char op3[], int reg[]){
    op1[0] = '0';
    op2[0] = '0';
    op3[0] = '0';
    int a = reg[atoi(op2)] % reg[atoi(op3)];
    if(a >= 0){
        reg[atoi(op1)]  = a;
    }else{
        reg[atoi(op1)]  = a + reg[atoi(op3)];
    } 
}