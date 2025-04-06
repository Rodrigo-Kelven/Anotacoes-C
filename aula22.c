#include <stdio.h>

// por padrao, esta funcao recebe um valor, mas cria uma copia do que foi passado, alterando apenas a copia local
void testVariavel(int x) {
    x++; // Incrementa a cópia local de x, mas não afeta a variável original
}

// aqui, a funcao recebe um ponteiro, ponteiro esse que tem um valor, valor esse que é o endereco da variável
// sendo assim, valor pode ser acessado pela funcao e alterando seu valor
void testPonteiro(int *pX) {
    ++*pX; // Incrementa o valor que pX aponta, afetando a variável original
}

int main(void) {
    int test = 1; // Declara e inicializa a variável test com 1
    int *pTest = &test; // Declara um ponteiro pTest que aponta para test
    
    // a funcao recebe o ponteiro sem o *, pois,a na funcao é feito uma desreferencia e o valor pode ser acessado
    testPonteiro(pTest); // Chama a função testPonteiro, que incrementa o valor de test
    
    printf("%d\n", test); // Imprime o valor de test, que agora deve ser 2
    
    return 0; // Retorna 0 para indicar que o programa terminou com sucesso
}
