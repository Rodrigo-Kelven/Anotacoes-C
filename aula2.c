#include <stdio.h>

int main(){

	int numero1, numero2, soma, numero3, numero4, soma2, mult;

	numero1 = 5;
	numero2 = 6;

	soma = (numero1 + numero2);
	printf("A soma de %d + %d é: %d\n", numero1, numero2, soma);

	printf("Digite um numero: ");
        scanf("%d", &numero3);
	printf("Digite outro numero: ");
        scanf("%d", &numero4);

	soma2 = numero3 + numero4;
	printf("A soma de %d + %d é: %d\n", numero3, numero4, soma);

	mult = numero3 + numero4;
        printf("A soma de %d * %d é: %d\n", numero3, numero4, mult);


}
