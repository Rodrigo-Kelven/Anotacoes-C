#include <stdio.h>

int main(){

	int fatorial;

	printf("Digite um numero inteiro: ");
	scanf("%d", &fatorial);

	int resposta = 1;

	for( ; fatorial >= 1; fatorial--){
		resposta *= fatorial;
	}
	printf("O numeor fatorial é: %d\n", resposta);

}
