// Online C compiler to run C program online
#include <stdio.h>

// funcoes

// funcao de retorno com um print
void imprimirMensagem(void){
  printf("Teste");
}

// funcao do tipo float -> esta primeira parte da funcao diz que o retorno tem que ser em float
// os parametros tem que ser passados com o tipo
// partes de uma funcoa
// tipo/retorno  nome da funcao  parametros e seus tipos
float calculoRetangulo(float x, float y){
  
  float z = x*y;
  
  
  return z;
}


int main(void) {
    
    // independentemente de onde a funcao esteja, encima ou embaixo, declare a funcao dentro do main,
    // é uma boa pratica
    void imprimirMensagem(void);
    // aqui esta sendo chamdo a funcao para realizar o print
    imprimirMensagem();
    
    float calculoRetangulo(float x, float y); // declaracao de funcao sendo uma boa pratia,
    float resposta = calculoRetangulo(10.0, 20.0); // passagem de parametros na funcao, e declaracao de uma varivel para receber os parametros de retorno 
    
    printf("\n%.2f\n", resposta);
    
    return 0;
}
