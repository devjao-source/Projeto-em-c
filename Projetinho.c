#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <windows.h>



//informações
int dados();
//

int imc(float kg, float altura, float peso, int sexo);
float kg,altura,peso;
int sexo, imc2;
char informacoes;


enum DOS_COLORS{ //Importar cores
	preto, azul, verde, CYAN, vermelho, MAGENTA, castanho, 
 cizento_claro, cizento_escuro, azul_claro, verde_claro, CYAN_claro,
 vermelho_claro, MAGENTA_claro, amarelo, branco
};
void textcolor(int iColor){
 HANDLE hl = GetStdHandle(STD_OUTPUT_HANDLE);
 CONSOLE_SCREEN_BUFFER_INFO bufferInfo;
 BOOL b = GetConsoleScreenBufferInfo(hl, &bufferInfo);
 bufferInfo.wAttributes &= 0x00F0;		
 SetConsoleTextAttribute (hl, bufferInfo.wAttributes |= iColor);
}


int main(){
    float kg,altura,peso;
    int sexo, imc2;
    char informacoes;

    //importar linguagem do brasilsil
    setlocale(LC_ALL, "Portuguese");

    //textcolor é usado para definir as cores.
    textcolor(vermelho);printf("\t Bem - Vindo ao Couch Online!\n\tAqui nós iremos dar uma lista completa de exercicios para você!");
    textcolor(branco);printf("\nPressione qualquer tecla para continuar....");
    getchar(); //receber caracter para continuar
    system("CLS"); //limpa o terminal

    dados();
}

//dados do usuario
int dados(){

    char dados[4][0xFF];
    int dadosNumeros[20];

    do{ //Estrutura de repetição usando do while caso o usuario digite uma opção invalida.
    printf("Você possui alguma deficiencia?\n1-Sim\n2-Não\n");
    scanf("%d",&dadosNumeros[0]);
    }while(dadosNumeros[0] != 2 && dadosNumeros[0] !=1);

    printf("Qual é o seu Nome?: ");
    scanf("%s", dados[0]);

    printf("Qual é sua altura? em centimetros: ");
    scanf("%d", &dadosNumeros[1]);

    printf("Qual é seu peso? em kg: ");
    scanf("%d", &dadosNumeros[2]);

    printf("Qual é sua idade?: ");
    scanf("%d", &dadosNumeros[3]);

    do{ //Estrutura de repetição usando do while caso o usuario digite uma opção invalida.
    printf("Qual é seu sexo? \n1 - Feminino\n2 - Masculino\n");
    scanf("%d", &dadosNumeros[4]);
    }while(dadosNumeros[4] != 2 && dadosNumeros[4] != 1);
    

}
 