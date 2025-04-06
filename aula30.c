#include <stdio.h>


int main(){
  
  // declaracao de um vetor
  int vetor[3] = {1,2,3};
  
  int *p = &vetor;
  
  printf("Endereco de memoria do vetor: %p\n", &vetor);
  printf("Endereco de memoria do ponteiro: %p\n", p);
  
  printf("\n");
  int *pF = vetor+3;
  printf("Endereco de memoria do ultimo indice de valor: %d: %p\n", *pF, pF);
  printf("\n");
  printf("Endereco de memoria do primeiro indice de valor: %d: %p\n", vetor[0], &vetor[0]);
  printf("Endereco de memoria do primeiro indice de valor: %d: %p\n",vetor[1], &vetor[1]);
  printf("Endereco de memoria do primeiro terceiro de valor: %d: %p\n",vetor[2], &vetor[2]);
  
  return 0;
}
