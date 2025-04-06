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
    
    
    // novo exemplo
    struct horario antes;
    
    int segundoAntes = 20;
    
    // aqui será atribuido diretamente valores aos menbros/campos da variavel antes do tipo struct horario
    // o membro hora da variavel antes do tipo struct horario esta recebendo o valor do membro segundo que a variavel ponteiro depois esta apontando
    antes.hora = depois->segundo;
    // aqui esta sendo somado o menbro da variavel agora com o menbro minuto do endereco da variavel ponteiro depois
    antes.minuto = agora.segundo + depois->minuto;
    // e aqui uma soma
    antes.segundo = segundoAntes + depois->segundo;
    
    printf("%d: %d: %d\n", antes.hora, antes.minuto, antes.segundo);
    
    
    
    return 0;
    
}
