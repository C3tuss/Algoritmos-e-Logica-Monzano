#include <stdio.h>
#include "operacoes.h"

void preencherVetor(int v[], int tam){

    for(int i = 0; i < tam; i++){

        scanf("%d", &v[i]);

    }
}

void multElePor3(int a[], int b[], int tam){

    for(int i = 0; i < tam; i++){
        b[i] = a[i]*3;
    }
}

void VetorMenosVetor(int a[], int b[], int c[], int tam){
    for(int i = 0; i < tam; i++){
        c[i] = a[i]-b[i];
    }
}

void vetorAoQuadrado(int a[], int b[], int tam){

    for(int i = 0; i < tam; i++){
        b[i] = aoQuadrado(a[i]);
    }
}


void vetorFat(int a[], unsigned long long b[], int tam){

    for(int i = 0; i < tam; i++){
        b[i] = fat(a[i]);
    }
}

void juntarVetores(int a[], int b[], int c[], int tam){

    for(int i = 0; i < tam; i++){
        c[i] = a[i];
        c[i + tam] = b[i];
    }

}


void inverterVetor(int a[], int b[], int tam){

    for(int i = 0; i < tam; i++){
        b[tam - (i+1)] = a[i];
    }

    /*
    for(int i = 0, int j = tam - 1; i < tam; i++, j--){
        b[j] = a[i];
    }
    */
}


void juntar3Vetores(int a[], int b[], int c[], int d[], int tam){

    for(int i = 0; i < tam; i++){
        d[i] = a[i];
        d[i + tam] = b[i];
        d[i + tam*2] = c[i];
    }

}

// depois fazer uma função generalizada;

int somatorio(int a){
    int sum = 0;

    for(int i = 1; i <= a; i++){
        sum += i;
    }

    return sum;
}

void vetorSomatorio(int a[], int b[], int tam){

    for(int i = 0; i < tam; i++){
        b[i] = somatorio(a[i]);
    }
}

void vetorNegativo(int a[], int b[], int tam){
    for(int i = 0; i < tam; i++){
        b[i] = -a[i];
    }
}

void vetorMetade(int a[], float b[], int tam){
    for(int i = 0; i < tam; i++){
        b[i] = a[i]/2;
    }
}


void vetorTabuada(int a[], int b){

    for(int i = 0; i < 10; i++){
        a[i] = b * (i+1);
    }
}

void menorMaiorMedia(int v[], int tam){

    int menor = v[0], maior = v[0];
    int sum = 0;

    for(int i = 0; i < tam; i++){

        if(v[i] > maior) maior = v[i];
        if(v[i] < menor) menor = v[i];
        sum += v[i];
    }

    printf("Maior: %d  Menor: %d   Media: %.2f\n", maior, menor, (float)sum/tam);

}

void vetorCelciusToFahrenheit(int a[], int b[], int tam){

    for(int i = 0; i < tam; i++){
        b[i] = celciusToFahrenheit(a[i]);
    }
}

void vetorPar(int a[], int b[], int tam){

    for(int i = 0; i < tam; i++){

        if(a[i] % 2 != 0) {
            b[i] = a[i]*2;

        } else{
            b[i] = a[i];

        }

    }
}

void vetorDiferenciado(float a[], float b[], int tam){
    
    for(int i = 0; i < tam; i++){
        if(i % 2 == 0){ 
            b[i] = a[i]/2;
        }else{
            b[i] = a[i] * 1.5;
        }
        
    }

}

void vetorparEimpar(int a[], int b[], int c[], int d[], int tam){

    for(int i = 0; i < tam; i++){
        int indx_c = 0;
        int indx_d = 0;

        if( i % 2 == 0){

            d[indx_d] = a[i];
            d[indx_d + 1] = b[i];
            indx_d += 2;

        } else {
            c[indx_c] = a[i];
            c[indx_c + 1] = b[i];

            indx_c += 2;
        }

    }
}

void vetor2diferenciado(int a[], int b[]){
    int index_a = 0;
    int index_b = 0;
    int valor;

    printf("Dgite 10 numeros multiplos de 5 e 10 numeros multiplos de 6\n");

    while (index_a < 10 || index_b < 10){
        
        scanf("%d", &valor);

        if(valor % 5 != 0 && valor % 6 != 0){
            printf("Valor inválido, somente numeros multiplos de 6 ou de 5\n");
            continue;
        }

        if(valor % 6 == 0 && index_a < 10){
            a[index_a] = valor;
            index_a ++;
            printf("%d eh multiplo de 6\n", valor);
        }
        
        if(valor % 5 == 0 && index_b < 10){
            b[index_b] = valor;
            index_b ++;
            printf("%d eh multiplo de 5\n", valor);
        }
   
    }
    
}

void vetor3diferenciado(int a[], int b[]){
    int index_a = 0;
    int index_b = 0;
    int valor;

    printf("Dgite 12 numeros que não sejam multiplos de 5 e 10 numeros multiplos de 2 ou 3\n");

    while (index_a < 12 || index_b < 12){
        
        scanf("%d", &valor);

        if(valor % 5 == 0 && valor % 2 != 0 && valor % 3 != 0){
            printf("Valor inválido, somente numeros multiplos de 2 ou 3 ou que não sejam multiplos de 5\n");
            continue;
        }

        if((valor % 2 == 0 || valor % 3 == 0) && index_a < 12){
            a[index_a] = valor;
            index_a ++;
            printf("%d eh multiplo de 2 ou 3\n", valor);
        }
        
        if(valor % 5 != 0 && index_b < 12){
            b[index_b] = valor;
            index_b ++;
            printf("%d nao eh multiplo de 5\n", valor);
        }
   
    }
    
}

void contarParesImpares(int a[], int tam){
    int par = 0;
    int impar = 0;

    for(int i = 0; i < tam; i++){
        a[i] % 2 == 0? par ++: impar++;
    }

    printf("Existem %d numeros pares e %d impares\n", par, impar);
}

void vetorQuadradoSoma(int a[], int b[], int c[], int tam){

    for(int i = 0; i < tam; i++){
        c[i] = aoQuadrado((a[i]+ b[i]));
    }
}

void vetorIndxTrocado(int a[], int b[], int tam){


    for(int i = 0; i < tam; i += 2){
        b[i] = a[i+1];
        b[i+1]= a[i];
    }

    if(tam % 2 != 0){
        b[tam - 1] = a[tam - 1];
    }
}
int main (){

    return 0;
}