#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch,
system("pause") or input loop */
int main() {
    int tabuada, x;
    printf("Digite a tabuda que voce deseja: ");
    scanf("%d", &tabuada);
    for (x = 1; x <= 10; ++x){
        printf("\n%d x %d = %d\n", tabuada, x, tabuada * x);
    }
    return 0;
}