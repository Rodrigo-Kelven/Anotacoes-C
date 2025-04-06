#include <stdio.h>


int main(){
  
  // declaracao de um vetor
  int vetor[3] = {1,2,3};
  // declaracao de um ponteiro que recebe um vetor, o endereco de memoria que o ponteiro receve, é o primeiro indice do vetor
  int *p = vetor; // mesma coisa int *p = &vetor;
  
  // aqui o ponteiro p, que é um endereco de memoria, esse somar +1,  significa que ele irá somar com o tamanho do tipo de dado que o ponteiro p aponta
  // ou seja, se o ponteiro p é de tipo inteiro, ele ocupa 4 bytes na memoria, entao ele irá somar + 4 bytes
  // fazendo essa soma, o ponteiro p reecbe/acessa o endereco de memoria do indice 1 do vetor, que possui o valor exp2
  // com o endereco de memoria do indice 2 de valor 2, eu realizo a desreferencia do vetor para poser acessar o valor
  // *() isto faz a desreferencia do vetor, que é o acesso ao valor que o endereco de memoria guarda, podendo assim fazer a troca de valor
  *(p + 2) = 10;
  
  printf("%d\n", vetor[1]);
  
  printf("Endereco do vetor: %p\n", &vetor);
  printf("Endereco do ponteiro: %p\n", p);
  printf("\n");
  printf("Endereco do ultimo indice do vetor: %p\n", &vetor[2]);
  printf("\n");
  
  // novo vetor
  int vetor2[3] = {2,3,4};
  int *p2 = &vetor2;
  
  
  printf("Endereco de vetor2: %p\n", &vetor2);
  printf("Endereco de ponteiro2: %p\n", p2);
  
  // aqui estou basicamente somando duas vezes 4 bytes, pois esses 4 bytes representa o tamanho do tipo de dado de onde o ponteiro2 aponta
  int **p3 = p2 += 2;
  printf("\n");
  
  printf("Endereco do segundo indice do vetor: %p\n", &vetor2[1]);
  int *p4 = &vetor2[1];
  printf("Endereco do segundo indice do vetor: %p\n", p4);
  printf("\n");
  printf("Endereco do terceiro indice do vetor: %p\n", &vetor2[2]);
  printf("Endereco do terceiro indice do vetor: %p\n", p3);
  printf("\n");
  printf("Valor do terceiro indice do vetor: %d\n", *p2);
  
  
  return 0;
}
