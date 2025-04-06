#include <stdio.h>
int main(){
  
  // aqui esta sendo a definicao de uma strutura
  struct horario{
    int horas;
    int minutos;
    int segundos;
  };
  //declaracao da estrutura horario
  // aqui a palavra agora, esta recebendo uma estrutura do tipo horario
  // entao agora é uma estrutura do tipo horario, ja que ela esta sendo declarada assim
  struct horario agora;
  
  agora.horas = 20;
  agora.minutos = 30;
  agora.segundos = 5;
  
  printf("Horas: %d\nMinutos: %d\nSegundos: %d\n",
        agora.horas, agora.minutos, agora.segundos
        );
  

}

