#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "decodifica.h"
#include "logica.h"
#include "operacao.h"
#include "saida.h"
#include "mopera.h"
#include "leitura.h"

//função que lê as instruções e as separa em op1 op2 e op3. Caso um dos operadores não exista, a função não é afetada.
void decodificador(char str[], char comand[], char op1[], char op2[], char op3[], int reg[], int mem[],int n , int *i){
    sscanf(str, "%s %s %s %s", comand, op1, op2, op3);
    //definindo cada operação baseada no nome da comandção lida pela primeira parcela do sscanf
    if (strcmp(comand, "ADD") == 0){
        add(op1, op2, op3, reg);
    }else if(strcmp(comand, "MOV") == 0){
        mov(op1, op2, reg);
    }else if(strcmp(comand, "MUL") == 0){
        mul(op1, op2, op3, reg);
    }else if(strcmp(comand, "PRINT") == 0){
        imprime(op1, reg);
    }else if(strcmp(comand, "SUB") == 0){
        sub(op1, op2, op3, reg);
    }else if(strcmp(comand, "MOD") == 0){
        mod(op1, op2, op3, reg);
    }else if(strcmp(comand, "DIV") == 0){
        divisao(op1, op2, op3, reg);
    }else if(strcmp(comand, "STORE") == 0){
        store(op1, op2, reg, mem);
    }else if(strcmp(comand, "LOAD") == 0){
        load(op1, op2, reg, mem);
    }else if(strcmp(comand, "BEQ") == 0){
        beq(op1, op2, op3, reg, i);
    }else if(strcmp(comand, "BLT") == 0){
        blt(op1, op2, op3, reg, i);
    }else if(strcmp(comand, "JMP") == 0){
        jump(op1, i);
    }else if(strcmp(comand, "EXIT") == 0){
        exits(n, i);
    }

}
