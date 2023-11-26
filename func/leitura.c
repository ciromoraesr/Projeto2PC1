#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "leitura.h"
//função para ler a string inteira 
void leitura(char str[],char comand[], char op1[], char op2[], char op3[]){
    fgets(str, 100, stdin);
}
//função mov em leitura para definir os valores que serão trabalhados no código toy assembly
void mov(char op1[], char op2[], int reg[]) {
    //Separando a função caso exista uma parcela RX RY ou caso seja RX INTEIRO
    if (op2[0] == 'R') {
        op2[0] = '0';
        op1[0] = '0';
        reg[atoi(op1)] = reg[atoi(op2)];
    } else {
        op1[0] = '0';
        reg[atoi(op1)] = atoi(op2);
    }
}

