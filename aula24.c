#include <stdio.h>

int main(void) {
  
  // Declaração da estrutura lista com dois membros
  // valor do tipo int
  // um membro ponteiro do tipo struct lista, porque este ponteiro será responsável por receber o endereço de memória de outro nó
  // por isso este ponteiro tem que ser do tipo struct lista
  struct lista {
    int valor;
    struct lista *proximo;
  };
  
  // Declaração das variáveis 
  struct lista m1, m2, m3;
  // Declaração da cabeça da lista, onde o ponteiro do tipo struct lista recebe o endereço de memória da variável struct lista m1
  // A cabeça é do tipo struct lista pois ela recebe somente endereços de memória de variáveis do tipo struct lista
  struct lista *cabeca = &m1;
  
  // Atribuição de valores aos membros das variáveis 
  m1.valor = 10;
  m2.valor = 20;
  m3.valor = 30;
  
  // Atribuição de endereços de memória das struct lista no membro ponteiro proximo que pode somente receber endereços de memória do tipo struct lista
  m1.proximo = &m2;
  m2.proximo = &m3;
  m3.proximo = (struct lista *)0; // Quando não existir próximo, o ponteiro do tipo struct lista recebe um valor nulo
  // m3.proximo = 0; // Esta linha também é válida e faz a mesma coisa
  
  // Print dos valores dos membros valor
  printf("%d, %d, %d\n", m1.valor, m2.valor, m3.valor);
  printf("\n");
  
  // Enquanto a cabeça tiver valor diferente de 0
  // O ponteiro cabeça que tem poder de acessar o valor do membro da variável pega o valor 
  while(cabeca != (struct lista *)0) {
    printf("Endereco da lista atual: %p\n", (void *)cabeca);  
    printf("Valor: %d\n", cabeca->valor);
    printf("Endereco da proxima estrutura: %p\n", (void *)cabeca->proximo);  
    printf("\n");
    // A cabeça recebe o endereço de memória da próxima variável do tipo struct lista no membro ponteiro proximo e armazena na cabeça
    cabeca = cabeca->proximo;
  }
  
  return 0;
}
