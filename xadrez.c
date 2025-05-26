#include <stdio.h>

int main() {
//declaracao de variaveis
int i;  //torre
int j = 1;  //bispo + inicializacao
int k = 1;  //rainha + inicializacao
int passoHorizontal, passoVertical; //cavalo

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

// Movimento do cavalo em "L" (duas casas para baixo + uma para esquerda)
    
    // loop for para duas casas para baixo
    for (passoVertical = 1; passoVertical <= 2; passoVertical++) {
        printf("Baixo\n");
    }

    // loop while para uma casa para esquerda
    passoHorizontal = 1;
    while (passoHorizontal <= 1) {
        printf("Esquerda\n");
        passoHorizontal++;
    }
    return 0;
}
