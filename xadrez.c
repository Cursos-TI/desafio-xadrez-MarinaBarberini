#include <stdio.h>

int main() {
//declaracao de variaveis
int i;  //torre
int j = 1;  //bispo + inicializacao
int k = 1;  //rainha + inicializacao

//movimentação da torre usando for
for(i = 1; i <= 5; i++){
    printf("Direita\n");
}

//movimentação do bispo usando while
while(j <= 5){
    printf("Cima direita\n");
    j++;
}

//movimentação da rainha
do{
    printf("Esquerda\n");
    k++;
} while (k <= 8);

    return 0;
}
