# TOY ASSEMBLY 
Projeto 2 da disciplina Programação de Computadores 1 realizado de acordo com o arquivo: https://danielsaad.com/programacao-de-computadores-1/assets/trabalhos/toy-assembly.pdf
# Autor
Nome: Ciro Moraes Rocha<br />
Disciplina: Programação de Computadores 1<br />
Instituição: Instituto Federal de Brasília (IFB)<br />

# Descrição
  O projeto 2 se trata de um conjunto de códigos que consigam ler e realizar operações de acordo com as principais instruções assembly.

  O projeto foi divido em 6 módulos, cada um com seu arquivo de cabeçalho e um arquivo adicional main que conecta todos esses módulos, e para ajudar na compilação do código, um arquivo makefile também foi disponibilizado para diminuir o número de operaçõe que o usuário realiza.
  
  As instruções são lidas após a entrada de um inteiro n que determina o número de linhas que o código terá. O programa aceita de 1 até 100 linhas de código e suporta até no máximo 10^5 operações(contando com repetições).
# As operações são: 

- **MOV RX INTEIRO:** Atribui o valor de INTEIRO a RX.
- **MOV RX RY:** Atribui o valor de RY a RX.
- **ADD RX RY RZ:** Soma os valores de RY e RZ e armazena o resultado em RX.
- **SUB RX RY RZ:** Subtrai RZ de RY e armazena o resultado em RX.
- **MUL RX RY RZ:** Multiplica RY por RZ e armazena o resultado em RX.
- **DIV RX RY RZ:** Divide RY por RZ, descartando a parte fracionária, e armazena o resultado em RX.
- **MOD RX RY RZ:** Calcula RY mod RZ e armazena o resultado em RX. O resultado é sempre 0 ≤ RX < RZ.
- **BEQ RX RY ENDERECO:** Redireciona o fluxo do programa para a instrução na linha ENDERECO se RX for igual a RY.
- **BLT RX RY ENDERECO:** Redireciona o fluxo do programa para a instrução na linha ENDERECO se RX for menor que RY.
- **JMP ENDERECO:** Redireciona o fluxo do programa para a instrução na linha ENDERECO.
- **LOAD RX RY:** Carrega o conteúdo de memory[RY] para o registrador RX.
- **STORE RX RY:** Carrega o conteúdo de RX para memory[RY].
- **PRINT RX:** Imprime uma linha na tela com o valor de RX.
- **EXIT:** Encerra o programa.

# Exemplo de uso

• Entrada:

5

MOV R0 1

MOV R1 1

ADD R0 R1 R1

PRINT R0

EXIT

• Saída:

2

# Instruções de utilização
1 - Instale e extrai o arquivo Projeto2PC1.zip;

2 - Para compilar o programa (Linux), navegue no terminal até o diretório Projeto2PC1 e utilize o comando "make";

3 - Depois de ter sido gerado o executável, compile-o no terminal e coloque as instruções que deseja realizar;

4 - Para limpar os arquivos .o do diretório, utilize o comando "make clean".

# Referências
https://danielsaad.com/programacao-de-computadores-1/assets/trabalhos/toy-assembly.pdf

# Considerações Finais

Este projeto desempenhou um papel significativo no meu processo de aprendizado em relação à modularização, destacando a importância de práticas essenciais ao lidar com um grande número de arquivos. Através dele, adquiri conhecimentos valiosos na criação de arquivos makefile e na aplicação prática de lógica de matrizes e ponteiros em um contexto real.
