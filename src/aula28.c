#include <stdio.h>


int main(){
  
  // declaracao de um vetor
  int vetor[3] = {1,2,3};
  // declaracao de um ponteiro que recebe um vetor, o endereco de memoria que o ponteiro receve, é o primeiro indice do vetor
  int *p = vetor;
  
  // aqui o ponteiro p, que é um endereco de memoria, esse somar +1,  significa que ele irá somar com o tamanho do tipo de dado que o ponteiro p aponta
  // ou seja, se o ponteiro p é de tipo inteiro, ele ocupa 4 bytes na memoria, entao ele irá somar + 4 bytes
  // fazendo essa soma, o ponteiro p reecbe/acessa o endereco de memoria do indice 1 do vetor, que possui o valor exp2
  // com o endereco de memoria do indice 2 de valor 2, eu realizo a desreferencia do vetor para poser acessar o valor
  // *() isto faz a desreferencia do vetor, que é o acesso ao valor que o endereco de memoria guarda, podendo assim fazer a troca de valor
  *(p + 1) = 10;
  
  printf("%d\n", vetor[1]);
  
  
  return 0;
}
