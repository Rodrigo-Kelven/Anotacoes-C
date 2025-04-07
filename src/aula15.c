#include <stdio.h>
int main(){
  
  struct data{
    int dia;
    int mes;
    int ano;
  };
  
  struct data hoje;
  
  hoje.dia = 05;
  hoje.mes = 04;
  hoje=ano = 2025;
  
  printf("%d\n%d\n%d\n", hoje.dia, hoje.mes, hoje.ano);
  

}
