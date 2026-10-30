#include <stdio.h>

float celciusToFahrenheit(float celcius){
    return celcius*9/5 + 32;
}

float fahrenheitToCelcius(float fahrenheit){
    return ((fahrenheit - 32)*5)/9;
} 

float volume (float raio, float altura){
    return 3.14159*(raio*raio)*altura;
}

float distanciaPercorrida(float velocidade, float horas){
    return velocidade*horas;
}

float litrosUsados(float distancia, float consumoMedio){
    return distancia/consumoMedio;
}

float prestacao(int valor, float taxa, int tempo){
    return valor + (valor*(taxa/100)*tempo);
}

void somaValores(int vetor[], char letras[], int tam){
    printf("Sequencia das somas\n");

    for(int i = 0; i < tam; i++){
        for (int j = i + 1; j < tam; j++){
            printf("%c + %c = %d\n", letras[i], letras[j], vetor[i] + vetor[j]);
        }
    }
}

void multiplicaValores(int vetor[], char letras[], int tam){
    printf("Sequencia das multiplicacoes\n");

    for(int i = 0; i < tam; i++){
        for (int j = i + 1; j < tam; j++){
            printf("%c * %c = %d\n", letras[i], letras[j], vetor[i] * vetor[j]);
        }
    }
}

float volumeRetangulo(float comprimento, float largura, float altura){
    return comprimento*largura*altura;
}

int aoQuadrado(int num){
    return num*num;
}

int quadradoDiferenca(int a, int b){
    return aoQuadrado(a) - (2*a*b) + aoQuadrado(b);
}

float realToDolar(float qtdReal, float cotDolar){
    return qtdReal/cotDolar;
}

float dolarToReal(float qtdDolar, float cotReal){
    return qtdDolar/cotReal;
}

int somaDosQuadrados(int vetor[], int tam){
    int sum = 0;
    for(int i = 0; i < tam; i++){
        sum += aoQuadrado(vetor[i]);
    }

    return sum;
}

float reajusteSalario(float salario, float percentutal){
    return salario * (100 + percentutal)/100;
}

float areaCircun(float raio){
    return 3.14159265*aoQuadrado(raio);
}

void operacoesBasicos(int a, int b){
    printf("A + B = %d\n", a + b);
    printf("A - B = %d\n", a - b);
    printf("A * B = %d\n", a * b);
    printf("A / B = %d\n", a/b);
}

float velocidadeMedia(int distancia, int tempo){
    return (distancia*1000)/(tempo*60);
}

int aoCubo(int a){
    return a*a*a;
}

float volumeEsfera(float raio){
    return (4/3)*3.14159*aoCubo(raio);
}

int baseExp(int base, int expo){
    int resultado = 1;

    for(int i = 0; i < expo; i ++){
        resultado *= base;
    }
}



int main() {

    float celcius, fahrenheit, raio, altura, volumeLata;
    int a, b, valores[4], valoresSomados[4], valoresMult[4];
    char letras[] = {'a', 'b', 'c', 'd'};
    


    printf("Digite a temperatura em ºC: \n");
    scanf("%f", celcius);

    fahrenheit = celciusToFahrenheit(celcius);

    printf("A Temperatura em Fahrenheit é: %f\n", fahrenheit);

    printf("Digite a temperatura em ºF: \n");
    scanf("%f", fahrenheit);

    celcius = fahrenheitToCelcius(fahrenheit);

    printf("A Temperatura em Celcius é: %f\n", celcius);

    
    printf("Digite o raio da lata e a altura da lata \n");
    scanf("%f %f", raio, altura);

    volumeLata = volume(raio, altura);

    printf("O volume da lata é: %f\n", volume);

    printf("Digite um valor para a e para b: \n");
    scanf("%d %d", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    for(int i = 0; i < 4; i ++){
        printf("Digite o valor pra letra [%c]: \n", letras[i]);
        scanf("%d", &valores[i]);
    };

    return 0;
}