#include <stdio.h>

int main(void){
    
    // declaracao de uma estrutura data
   struct data{
     int dia;
     int mes;
     int ano;
   };
   
   // declaracao de 3 variaveis do tipo struct data, sendo uma dela uma variavel ponteiro do tipo struct data
   struct data hoje, amanhan, *depois;
   
   // a variavel ponteiro struct depois que so pode receber enderecos de memoria de outras variaveis do tipo struct data
   // esta recebendo um endereco de memoria de uma variavel hoje do tipo struct data 
   depois = &hoje;
   
   // a variavel ponteiro depois do tipo struct data, possuindo o endereco de memoria da variavel hoje so tipo struct data
   // tem o poder de acessar os membros/campos e atribuir valores
   depois->dia = 05;
   depois->mes = 04;
   depois->ano = 2025;
   
   printf("Dia: %d Mes: %d Ano: %d\n", hoje.dia, hoje.mes, hoje.ano);
   
   // o mesmo valo para este exemplo, onde a variavel ponteiro depois do tipo struct data agora recebe o endereco de memoria do tipo struct data
   // possuindo assim o poder de acessar somente os membros/campos do endereco de memoria que ela possui
   depois = &amanhan;
   
   depois->dia = 06;
   depois->mes = 04;
   depois->ano = 2025;
   
   printf("Dia: %d Mes: %d Ano: %d\n", amanhan.dia, amanhan.mes, amanhan.ano);
    
}
