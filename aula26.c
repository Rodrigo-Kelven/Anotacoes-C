#include <stdio.h>

int main(void) {
    
    struct lista{
        int valor;
        struct lista *proximo;
    };
    
    struct lista m1, m2, m3;
    struct lista *cabeca = &m1;
    
    m1.valor = 10;
    m2.valor = 20;
    m3.valor = 30;
    
    m1.proximo = &m2;
    m2.proximo = &m3;
    m3.proximo = (struct lista *)0;
    
    // while(cabeca != (struct lista *)0){
    //     printf("\n");
    //     printf("Endereco atual: %p\n", (void*)cabeca);
    //     printf("Valor do endereco atual: %d\n", cabeca->valor);
    //     printf("Proximo valor: %p\n", cabeca->proximo);
    //     if (cabeca->proximo == (struct lista *)0){
    //         printf("Sem valor para proxima lista.");
    //     }
    //     cabeca = cabeca->proximo;
    // }
    
    for ( ; cabeca != (struct lista *)0; cabeca = cabeca->proximo){
        printf("\n");
        printf("Endereco atual: %p\n", (void*)cabeca);
        printf("Valor: %d\n", cabeca->valor);
        printf("Proximo endereco: %p\n", (void*)cabeca->proximo);
        if (cabeca->proximo == (struct lista *)0){
            printf("Nenhum valor proximo encontrado.");
        }
    }
    
    return 0;
}
