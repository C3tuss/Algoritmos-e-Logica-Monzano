#include <stdio.h>
#include "operacoes.h"

void somaMatrizes(int linhas, int colunas, const int a[linhas][colunas],
    const int b[linhas][colunas],
    int c[linhas][colunas]){

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }
}

void matrizComposta(int linhas, int colunas, const int a[],
    const int b[],
    int c[linhas][colunas]){

        for(int i = 0; i < linhas; i++){
            c[i][0] = a[i];
            c[i][1] = b[i];
        }

}


void preencherMatriz(int linhas, int colunas, int a[linhas][colunas]){

    int valor;

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){

            scanf("%d", &valor);
            a[linhas][colunas] = valor;
        }
    }
}

void exibirMatriz(int linhas, int colunas, int a[linhas][colunas]){

    for(int i = 0; i < linhas; i++){
        printf("|");
        for(int j = 0; j < colunas; j++){
            printf("%d ", a[linhas][colunas]);
            if(j < colunas - 1){
                printf("\t");
            }
        }
        printf("|\n");
    }
}

void matrizDoida(int linhas, int colunas, int a[linhas][colunas], int b[]){

    for(int i = 0; i < colunas; i++){
        for(int j = 0; j < linhas; j++){

            switch (i){
            case 0:
                a[j][i] = b[j] + 5;
                break;
            
            case 1:
                a[j][i] = fat(b[j]);
                break;

            default:
                a[j][i] = aoQuadrado(b[j]);
                break;
            }
            
        }
    }

}

void matrizDiagonalDiferenciada(int linhas, int colunas, int a[linhas][colunas], int b[linhas][colunas]){

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            if(i == j){
                b[i][j] = a[i][j]*3;
            }else{

                b[i][j] = a[i][j]*2;
            }
        }
    }
}

int sum(int a){

    if(a <= 1) return a;

    return a + sum(a-1);
}


void matrizDiagonalImpar(int linhas, int colunas, int a[linhas][colunas], int b[linhas][colunas]){

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            if(i == j && i % 2 != 0){
                b[i][j] = fat(a[i][j]);
            }else{

                b[i][j] = sum(a[i][j]);
            }
        }
    }
}

void somaDiagonal(int linhas, int colunas, int a[linhas][colunas]){

    if(linhas != colunas) {
        printf("Nao eh uma matriz quadrada\n");
        return;
    }

    for(int i = 0; i < linhas; i++){
        a[i][i] = sum(a[i][i]);
    }
}

void vetorSumMatriz(int linhas, int colunas, int a[linhas][colunas], int b[]){
    
    for(int i = 0; i < linhas; i++){
        int sum = 0;
        for(int j = 0; j < colunas; j++){
            sum += a[i][j];
        }
        b[i] = sum;
    }
}

void sumLinhas(int linhas, int colunas, int a[linhas][colunas], int b[]){

    for(int i = 0; i < linhas; i++){
        int sum = 0;
        for(int j = 0; j < colunas; j++){
            sum += a[i][j];
        }
        b[i] = sum;
    }
}

void preencherDuasMatrizes(int linhas, int colunas, int a[linhas][colunas], int b[linhas][colunas]){

    int indx_a = 0;
    int indx_b = 0;
    int total = linhas*colunas;
    int valor;

    while(indx_a < total || indx_b < total){

        
        scanf("%d", &valor);

        if(valor % 2 == 0){
            if(indx_a < total){
                int i = indx_a / colunas;
                int j = indx_a % colunas;

                a[i][j] = valor;
                indx_a++;
            }
        }else{
            if(indx_b < total){
                int i = indx_b / colunas;
                int j = indx_b % colunas;

                b[i][j] = valor;
                
                indx_b++;
            }
        }
    }
}

void diagonalInversa(int linhas, int colunas, int a[linhas][colunas], int b[linhas][colunas]){
    
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            if(j == colunas - 1 - i){
                b[i][j] = 3*a[i][j];
            }else{
                b[i][j] = 2*a[i][j];
            }
        }
    }
}


int main(){
    return 0;

}