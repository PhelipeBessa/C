#include <stdio.h>
#include <stdlib.h>
#include<math.h>

//Item A
int soma (int n1, int n2){
    int resultado;
    resultado = n1 + n2;
    return (resultado);
}

//Item B
int multi (int n1, int n2){
    int resultado;
    resultado = n1 * (n2 * n2);
    return (resultado);
}

//Item C
int quad (int n1){
    int resultado;
    resultado = (n1 * n1);
    return (resultado);
}

//Item D
int raiz (int n1, int n2){
    int resultado;
    resultado = (int) sqrt ((n1 * n1) + (n2 * n2));
    return (resultado);
}

//Item e
int seno (int n1, int n2){
    float resultado;
    resultado = sin ((n1 - n2));
    return (resultado);
}

//Item F
int modulo (int n1){
    int resultado;
    if (n1 >= 0){
        resultado = n1;
    }
    else{
        resultado = n1;
    }
    return (resultado);
}

int main(void) {
    int v1, v2, resultado;
    printf("Digite um valor : ");
    scanf("%d", &v1);
    printf("Digite outro valor : ");
    scanf("%d", &v2);
    resultado = soma (v1, v2);
    printf("A soma dos dois numeros e: %d\n", resultado);
    resultado = multi (v1, v2);
    printf("O produto do primeiro numero pelo quadrado do segundo e: %d\n", resultado);
    resultado = quad (v1);
    printf("O quadrado do primeiro numero e: %d\n", resultado);
    resultado = raiz (v1, v2);
    printf("A raiz quadrada da soma dos quadrados e: %d\n", resultado);
    resultado = seno (v1, v2);
    printf("O seno da diferenca do primeiro numero pelo segundo e: %f\n", resultado);
    resultado = modulo (v1);
    printf("O modulo do primeiro numero e: %d\n", resultado);
    return 0;
}