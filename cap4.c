#include <stdio.h>
#include "operacoes.h"
#include <math.h>

int diferançaMairMenor(int a, int b){

    if (a > b){
        return a - b;
    }

    return b - a;
}

int modulo(int a){

    if (a < 0){return a*(-1);}

    return a;
}

void mediaNotas(int notas[]){
    int sum = 0;

    for(int i = 0; i < 4; i++){
        sum += notas[i];
    }

    if (sum/4 >= 5){
        printf("Aprovado! Nota: %f\n", sum/4);
    }

    printf("Reprovado! Nota: %f\n", sum/4);
}

int bhaskara (int a, int b, int c, double raizes[2]){
    
    if (a == 0){return -1;}

    double delta;

    delta = aoQuadrado(b) - 4*a*c;

    if (delta < 0 ){return 0;}

    raizes[0] = (-b + sqrt(delta))/(2*a);
    raizes[1] = (-b - sqrt(delta))/(2*a);

    return (delta == 0)? 1:2;
}

void ordemCres(int vetor[], int tam){

    int temp;

    for(int i = 0; i < tam - 1; i++){
        for(int j = i + 1; j < tam; j++){
            if(vetor[i] > vetor[j]){
                temp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temp;
            }
        }
    }
}

void doisEtres(int v[], int tam){
    for(int i = 0; i < tam; i++){
        if(v[i] % 3 == 0 && v[i] % 2 == 0){
            printf("%d\n", v[i]);
        }
    }
}

void doisOUtres(int v[], int tam){
    for(int i = 0; i < tam; i++){
        if(v[i] % 3 == 0 || v[i] % 2 == 0){
            printf("%d\n", v[i]);
        }
    }
}

void maiorEmenor(int v[], int tam){
    int maior = v[0], menor = v[0];

    for(int i = 1; i < tam; i++){
        if(v[i] > maior) maior = v[i];

        if(v[i] < menor) menor = v[i];
    }

    printf("Maior: %d  Menor: %d\n", maior, menor);
}

int ehPar(int a){return (a % 2 == 0);}

int estaNaFaixa(int a) {return (a >= 1 && a <= 9);}

int main (){


    return 0;
}



