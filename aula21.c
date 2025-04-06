#include <stdio.h>

int main(void){
  
  // declaracao de uma struct onde todos os membros sao ponteiros, ou seja, so podem receber e armazenar enderecos de memoria
  struct horario{
    int *pHora;
    int *pMinuto;
    int *pSegundo;
  };
  
  // declaracao de variaveis do tipo struct horario,
  struct horario hoje;
  
  // declaracao e inicializacao de variaveis e seus valores
  int hora = 200;
  int minuto = 300;
  int segundo = 400;
  
  // print os valores das variaveis
  printf("Hora: %d\nMinuto: %d\nSegundo: %d\n", hora, minuto, segundo);
  
  // o membro ponteiro pHora recebe/aponta um/pra Endereco de memoria da variavel hora
  hoje.pHora = &hora;
  // o membro ponteiro pMinuto recebe/aponta um/pra Endereco de memoria da variavel minuto
  hoje.pMinuto = &minuto;
  // o membro ponteiro pSegundo recebe/aponta um/pra Endereco de memoria da variavel segundo
  hoje.pSegundo = &segundo;
  
  
  printf("\n");
  // print o valor que o Endereco de memoria armazenado nos membros ponteiros armazenam
  printf("Hora: %d\nMinuto: %d\nSegundo: %d\n", *hoje.pHora, *hoje.pMinuto, *hoje.pSegundo);
  
  printf("\n");
  *hoje.pSegundo = 1000; // modificando diretamento o valor do membro ponteiro pSegundo
  // print o valor que o Endereco de memoria armazenado nos membros ponteiros armazenam
  printf("Hora: %d\nMinuto: %d\nSegundo: %d\n", *hoje.pHora, *hoje.pMinuto, *hoje.pSegundo);
  
  printf("\n");
  // print os enderecos de memoria armazenados nos monbros ponteiros 
  printf("Endereco de memoria de armazenado em pHora: %p\nEndereco de memoria de armazenado em pMinuto: %p\nEndereco de memoria de armazenado em pSegundo: %p\n", &hoje.pHora, &hoje.pMinuto, &hoje.pSegundo);
  
  return 0;
    
}
