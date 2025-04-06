#include <stdio.h>


int main(){
  
  int vetor[3] = {1,2,3};
  // nao precisa passa o operador &, porque o ponteiro ja pega o endereco de memoria do primeiro indice do vetor
  int *p = vetor; 
  // caso eu queira que o meu ponteiro acesse um indice especifico, eu forco ele a apontar para o endereco do indice especifico
  int *p1 = &vetor[1];
  int *p2 = &vetor[2];
  
  printf("Endereco: %p do indice 0 com valor %d\n", (void*)p, *p);
  printf("Endereco: %p do indice 1 com valor: %d\n", (void*)p1, *p1);
  printf("Endereco: %p do indice 2 com valor: %d\n", (void*)p2, *p2);
  printf("\n");
  printf("Endereco do vetor: %p\n", &vetor);
  printf("Endereco do ponteiro: %p\n", &p);
  
  
  
  return 0;
}
