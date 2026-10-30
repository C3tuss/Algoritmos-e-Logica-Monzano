#ifndef OPERACOES_H
#define OPERACOES_H

int aoQuadrado(int num){
    return num*num;
}
int ehPar(int a){return (a % 2 == 0);}

float celciusToFahrenheit(int celcius){
    return celcius*9/5 + 32;
}

unsigned long long fat(int a){

    if(a <= 1) return 1;

    return a * fat(a - 1);
}

#endif
