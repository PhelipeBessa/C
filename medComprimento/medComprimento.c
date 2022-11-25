#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch,
system("pause") or input loop */
int multiDm (int n1){
    int resultado1;
    resultado1 = n1 * 10;
    return (resultado1);
}

int multiCm (int n2){
    int resultado2;
    resultado2 = n2 * 100;
    return (resultado2);
}

int multiMm (int n3){
    int resultado3;
    resultado3 = n3 * 1000;
    return (resultado3);
}

int main(void) {
    int m, dm, cm, mm, resultado1, resultado2, resultado3;
    printf("Digite um valor em metros: ");
    scanf("%d", &m);
    resultado1 = multiDm (m);
    resultado2 = multiCm (m);
    resultado3 = multiMm (m);
    printf("Valor em decimetros: %d", resultado1);
    printf("\nValor em centimetros: %d", resultado2);
    printf("\nValor em milimetros: %d", resultado3);
    return 0;
}