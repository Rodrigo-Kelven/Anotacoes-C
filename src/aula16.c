#include <stdio.h>

int main(void){
    
    int x = 10;
    int *p;
    
    p = &x;
    
    printf("Endereco de memoria que a variavel p do tipo ponteiro esta recebendo: %p\n", p);
    printf("Endereco de memoria de x: %p\n", (void*)&x);
    
    printf("Valor de x: %d\n", x);
    printf("Valor que do endereco de memoria que a variavel p do tipo ponteiro esta recebendo: %d\n", *p);
    
    printf("Endereco de memoria da variavel p do tipo ponteiro: %p\n", (void*)&p);
    
    return 0;
    
}
