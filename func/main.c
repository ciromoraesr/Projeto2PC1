#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "decodifica.h"
#include "logica.h"
#include "operacao.h"
#include "saida.h"
#include "mopera.h"
#include "leitura.h"

int main() {
    //definindo os inteiros usados e os vetores de registrador e memória, preenchendo-os com zeros antes de suas utilizações

    int n, reg[32] = {0}, mem[1000] = {0}, lim = 0;
    //lendo o número de instruções que serão realizadas
    scanf("%d", &n);
    /*definindo a matriz de instruções que tem n linhas e tamanho máximo de cóluna 60 que serão preenchidos pelos caractéres
    da instrução*/
    char str[n][60];
    //definindo também as strings auxiliares que vão separar a string inicial 
    char comand[6], op1[4], op2[11], op3[4];
    getchar();
    //retirando buffer do teclado 
    for (int i = 0; i < n; i++) {
        //função de leitura antes das operações
        leitura(str[i], comand, op1, op2, op3);
    }
    //operações
    for(int i = 0; i < n; i++){
        lim++;
        //definindo um limite de 10^5 operações a serem realizadas no código
        if (lim == 100000){
            break;
        }
        //função de decodificação de cada instrução presente na matriz str
        //passando o endereço de i como parâmetro para que seu valor seja alterado por referência
        decodificador(str[i], comand, op1, op2, op3, reg, mem, n, &i);   
    }
   printf("\n");
    return 0;
}
