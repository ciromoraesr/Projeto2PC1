#include <stdio.h>
#include <stdlib.h>
#include "logica.h"
/*função lógica BEQ que compara o valor do registrador op1 com o valor do registrador op2 e caso a igualdade seja válida move
o código para o valor definido em op3 com o ponteiro de ponteiro apontado para o inteiro de indexação */
void beq(char op1[], char op2[], char op3[], int reg[], int *i) {
    op1[0] = '0';
    op2[0] = '0';
    if (reg[atoi(op1)] == reg[atoi(op2)]) {
        *i = atoi(op3) - 1;
   
    }
}
//Mesma lógica da de cima mas usando uma função BLT que compara se o valor de op1 é menor q o de op2
void blt(char op1[], char op2[], char op3[], int reg[], int *i) {
    op1[0] = '0';
    op2[0] = '0';
    if (reg[atoi(op1)] < reg[atoi(op2)]) {
        *i = atoi(op3) - 1;
    }
}
void jump(char op1[], int *i){
    *i = atoi(op1) - 1;
}


