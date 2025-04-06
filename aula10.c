#include <stdio.h>


// deixar o main vazio e colocar void é a mesma coisaa
int main(void){

	// vetor, um vetor é declarado com a seguinte sequencia, tipo, nome, tamanho
	float nota[5];
	// aqui estamos declarando os valores referentes a cada posicao/indice no vetor nota
	nota[0] = 4;
	nota[1] = 2;
	nota[2] = 9;
	nota[3] = 8;
	nota[4] = 5;

	// imprimindo o valor do indice 2 no vetor nota
	printf("%f", nota[2]);


	// usando um for para preencher um vetor
	int vetor[10];

	for(int i=0; i<10; i++){
		vetor[i] = i;
	}

	for(int j=0; j<10; j++){
		printf("%d\n", vetor[j]);
	}

	return 0;
}

