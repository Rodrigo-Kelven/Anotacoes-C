#include <stdio.h>
int main(){
  
  // aqui esta sendo declarado e inicializada uma matriz
  int matriz[3][3] ={1,2,3,4,5,6,7,8,9};
  // aqui esta sendo declarada a funcao para percorrer a matriz
  void Matrizz(int x[3][3]);
  // aqui esta sendo passado a matriz dentro da funcao para percorrer a matriz
  // veja que somente o nome da matriz ja declarada e instanciada  é nescessario
  Matrizz(matriz);
  

}

// passando matrizes em funcoes, deve-se declarar o tipo, um nome qualquer, e o tamanho da Matriz
// esses parametros sao nescessarios e obrigatorios
void Matrizz(int x[3][3]){
  
  int i, j;
  
  for(int i = 0; i<3; i++){
    for(int j = 0; j<3; j++){
      printf("%d",x[i][j]);
    }
  }
}
