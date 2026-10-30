#include <stdio.h>
#include <math.h>
#include "operacoes.h"

void tabuada(int a){

    for(int i = 1; i <= 10; i++){
        printf("%d x %d = %d\n", i, a, i*a);
    }
}


int soma100(){
    int sum = 0;

    for(int i = 1; i <= 100; i++){
        sum += 1;
    }

    return sum;
}

int soma500(){
    int sum = 0;

    for(int i = 1; i <= 500; i++){
        sum += 1;
    }

    return sum;
}

void numImpares(){
    for(int i = 0; i <= 20; i++){
        if(!ehPar(i)) printf("%d\n", i);
    }
}

void divi4(){
    for(int i = 1; i < 200; i++){
        if(i % 4 == 0) printf("%d\n", i);
    }
}

void pow3(){
    int pow = 1;

    for(int i = 0; i <= 15; i++){
        printf("%d\n", pow);

        pow *= 3;
    }
}

int potencia(int base, int exp){
    int pow = 1;
    for(int i = 1; i <= exp; i++ ) pow *= base;

    return pow;
}

void fibonacci (){
    int atual = 1, anterior = 0, proximo = 0;

    printf("%d\n", anterior);
    printf("%d\n", atual);

    for(int i = 2; i < 16; i++){
        proximo = atual + anterior;
        printf("%d\n", proximo);
        anterior = atual;
        atual = proximo;
    }
}

void celciusToFah10(){
    for(int i = 10; i <= 100; i += 10){
        printf("%d C = %.1f F\n", celciusToFahrenheit(i));
    }
}


void graosNoTabuleiro(){

    unsigned long long sum = 0;
    unsigned long long graos_no_tabuleiro = 1;

    for(int i = 1; i <= 64; i++){

        sum += graos_no_tabuleiro;
        graos_no_tabuleiro *= 2;
        
    }

    printf("%llu grãos no tabuleiro", sum);
}

unsigned long long fat(int a){

    if(a <= 1) return 1;

    return a * fat(a - 1);
}

void somaSucessiva(){

    int valor = 0;
    int soma =0;
    int i = 0;

    while (1){

        printf("Digite um valor (digite -1 para parar): \n");
        scanf("%d",  valor);

        if (valor == -1) break;

        soma += valor;
        i++;

    }
    
    printf("Soma dos valores: %d\n", valor);
    printf("Media = %.2f\n", valor/i);
}

void fatImpares(){
    for(int i = 1; i <=10; i += 2) printf("%llu \n", fat(i));
}

void somaPares50ate70(){

    int soma = 0;
    int count = 0;

    for(int i = 50; i <= 70; i += 2){ 
        soma += i;
        count++;
    }

    printf("Soma = %d\n", soma);
    printf("Media =  %.2f \n", (float)soma/count);
}



int main (){

    return 0;
}