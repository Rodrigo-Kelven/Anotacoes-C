#include <stdio.h>

void testVariavel(int x) {
    x++; // Incrementa a cópia local de x
}

void testPonteiro(int *pX) {
    ++*pX; // Incrementa o valor que pX aponta
}

int main(void) {
    int a = 5;
    int b = 5;

    testVariavel(a); // Passagem por valor
    testPonteiro(&b); // Passagem por referência (ponteiro)

    printf("Valor de a após testVariavel: %d\n", a); // Saída: 5
    printf("Valor de b após testPonteiro: %d\n", b); // Saída: 6

    return 0;
}
