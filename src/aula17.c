#include <stdio.h>

int main(void){
    
    int x = 10;
    int y = 20;
    
    int *pY = &y;
    
    
    // existem duas formas de declarar e iniciar um ponteiro
    // primeira forma
    int *p; // desta forma, estou apenas declarando uma variavel chamada p, do tipo ponteiro que somente recebe enderecos de memoria
    p = &x; // aqui, a variavel p que é um ponteiro, esta recebendo/apontando, o/para endereco de memoria de x
    
    // segunda forma
    int *p2 = &x; // aqui a variavel ponteiro esta sendo declarada e recebendo um endereco de memoria, endereco de x na memoria
    
    int soma = *pY + *p;
    
    int *resultado = &soma;
    
    
    printf("Valor de x: %d\n", x);
    printf("Endereco de memoria de x: %p\n", &x);
    // *p2, este é o operador de desreferencia, ele tem o papel de pegar o valor que o endereco de memoria guarda
    // ele basicamente é o oposto de declaracao de variaveis ponteiros,
    // ele pega o endereco de memoria, pega o valor que este endereco de memoria guarda, e devolve
    printf("Valor do endereco de memoria do ponteiro: %d\n", *p2);
    printf("Endereco de memoria da variavel ponteiro: %p\n", &p2);
    // pegando o endereco de x armazenado no ponteiro
    printf("Pegando o endereco de x armazenado no ponteiro: %p\n", p2);
    
    printf("Endereco de memoria do ponteiro soma: %p\n", &soma);
    printf("Valor do endereco que o ponteiro soma armazena: %d\n", soma);
    
    printf("Endereco de memoria do ponteiro resultao: %p\n", &resultado);
    printf("Valor do endereco de meoria que o ponteiro resultado armazena: %d\n", *resultado);
    
    return 0;
    
}
