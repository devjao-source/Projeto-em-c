#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <locale.h>

int main (void) {

  char dados[4][0xFF];
  int dadosNumeros[20];
  
  do{ //Estrutura de repetição usando do while caso o usuario digite uma opção invalida.
    printf("Qual é seu sexo? 1 - Feminino\n 2 - Masculino\n");
    scanf("%d", &dadosNumeros[4]);
    }while(dados[4] != 2 && dados[4] != 1);
    
    
    printf("teste");
}