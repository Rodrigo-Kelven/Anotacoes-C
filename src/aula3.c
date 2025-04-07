#include <stdio.h>

int main(){
	int inteira = 10;
	float decimal = 10.8;
	char caracter = 'a';

	int numero1, numero2, soma, mult, div, sub;

	printf("Variaveis declaradas:\n");
	printf("Inteira: %d\nDecimal %f\nCaracteres: %c\n", inteira, decimal, caracter);

	printf("Todas as operacoes.\n");

	printf("Digite um numero: \n");
	scanf("%d", &numero1);

	printf("Digite outro numero: \n");
        scanf("%d", &numero2);

	soma = numero1 + numero2;
	mult = numero1 * numero2;
	div = numero1 / numero2;
	sub = numero1 - numero2;

	printf("Operacoes realizadas.");
	printf("Soma de %d + %d é: %d\n", numero1, numero2, soma);
	printf("Multiplicacao de %d * %d é: %d\n", numero1, numero2, mult);
	printf("Divisao de %d / %d é: %d\n", numero1, numero2, div);
	printf("Subtracao de %d - %d é: %d\n", numero1, numero2, sub);
}
