#include <stdio.h>

// operador ternario

int main() {
	// declaracao e inicializacao das variaveis
	int num1 = 10;
	int num2 = 20;

	// o operador ternamrio tem a funcao de exibir o primeiro print caso a condicao seja valida
	// caso nao seja valida, o segundo print é exibido.
	num1 < num2 ? printf("Num1 é menor que Num2\n") : printf("Num2 é maior que Num1\n");

}
