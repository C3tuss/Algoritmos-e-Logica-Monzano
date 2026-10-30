#include <stdio.h>

void imprimir(int a[], int tam){
    for(int i = 0; i < tam; i++){
        printf("%d ", a[i]);
    }
}
void ordemDecrescente(int a[], int tam){
    int temp;

    for(int i = 0; i < tam - 1; i++){
        for(int j = i + 1; j < tam; j++){
            if(a[i] < a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

void ordemCrescente(int a[], int tam){
    int temp;

    for(int i = 0; i < tam - 1; i++){
        for(int j = i + 1; j < tam; j++){
            if(a[i] > a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int buscaBinaria(int a[], int tam, int valor){
    int inicio = 0;
    int fim = tam - 1;

    while (inicio <= fim){
        int meio = (inicio + fim)/2;

        if(valor == a[meio]){
            return meio;
        }

        if(valor < a[meio]){
            fim = meio - 1;
        }else{
            inicio = meio + 1;
        }

        return -1;
    }
    
}

int main(){

    int a[5] = {3, 5, 1, 4, 2};


    imprimir(a, 5);
    printf("\n");

    ordemDecrescente(a, 5);
    imprimir(a, 5);

    printf("\n%d\n", 3/2);
    

    
    return 0;
}