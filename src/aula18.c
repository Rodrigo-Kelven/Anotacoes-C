#include <stdio.h>

int main(void){
    
    // aqui esta sendo declarada uma estrutura chamada horario, que possui membros/campos, hora, minuto, segundo
    struct horario{
      int hora;
      int minuto;
      int segundo;
    };
    
    // aqui estou declarando duas variaveis, agora do tipo struct horario, que vai possuir os membros
    // e uma variavel ponteiro do tipo struct horario, essa variavel so poderá receber enderecos de memoria de variaveis do tipo struct horario
    struct horario agora, *depois;
    // aqui, a variavel ponteiro depois, esta recebendo o endereco de memoria da variavel do tipo struct horario
    depois = &agora;
    
    // aqui, a variavel ponteiro depois do tipo struct horario,
    // que possui o endereco de memoria da variavel agora do tipo struct horario, pode acessar os menbros hora, minuto e segundo da variavel agora
    // pois a variavel ponteiro depois possui o endereco da variavel agora, podendo assim acessar os seus menbros diretamente
    // é como se a variavel ponteiro depois do tipo struct, fizesse a desreferencia automatica para poder acessar os valores dos menbros
    // O operador -> é usado para acessar os membros da estrutura através do ponteiro, já que o ponteiro depois possui o enderecode agora
    // so precisa realizar a atribuicao dos valores aos seus respectivos membros
    depois->hora = 10;
    depois->minuto = 30;
    depois->segundo = 45;
    
    // aqui é exibido os valores modificados pelo ponteiro depois do tipo struct
    printf("%d: %d: %d\n", agora.hora, agora.minuto, agora.segundo);
    
    
    
    
    return 0;
    
}
