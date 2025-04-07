#include <stdio.h>

// C é facil demais, voce consegue perceber um padrao?
// for, while. if else e etc. suas condicoes sempre estao dentro de um bloco
// C é uma linguagem estruturada, separadas por blocos de código
// blocos de comandos separados por () e {}


int main(){

	int idade;

	printf("Digite sua idade: ");
	scanf("%d", &idade);
	//printf("Sua idade é: %d\n", idade);

	if (idade <= 8)
		printf("Voce é um pentelho!\n");
	else if (idade >= 10 && idade <= 16)
		printf("Voce é um aborrecente.\n");
	else if (idade >= 18 && idade <= 27)
		printf("Voce é um adulto.\n");
	else
		printf("Idoso.\n");

	// switch
	int numero;

	printf("Digite um numero: \n");
	scanf("%d", &numero);

	switch(numero){
	case 1:
		printf("Domingo\n");
		break;
	case 2:
		printf("Segunda.\n");
		break;
	case 3:
		printf("Terca.\n");
		break;
	case 4:
		printf("Quarta.\n");
		break;
	case 5:
		printf("Quinta.\n");
		break;
	case 6:
		printf("Sexta.\n");
		break;
	case 7:
		printf("Sabado.\n");
		break;
	}
}
