#include <stdio.h>

int main(void) {
  
  struct lista {
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
  m3.proximo = (struct lista *) 0;
  
  printf("%d, %d, %d\n", m1.valor, m2.valor, m3.valor);
  
  // while (cabeca != (struct lista *)0){
  //   printf("Valor: %d\n", cabeca->valor);
  //   cabeca = cabeca->proximo;
  // }
  
  printf("\n");
  for ( ; cabeca != (struct lista *)0 ; cabeca = cabeca->proximo){
    printf("Valor: %d\n", cabeca->valor);
    
  }
  
  
  return 0;
}
