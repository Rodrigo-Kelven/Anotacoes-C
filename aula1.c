#include <stdio.h> // realiza a inclusao da biblioteca de entrada e saida de dados

// em C existe uma funcao principal, main, ela é responsavel por inicializar qualquer projeto, ela inicia primeiro
int main(){
	printf("Meu primeiro programa em C.\n"); //isto irá exibir um texto e quebra de linha na tela
	
	// declaracao de variavel
	// para declarar, primeiro declara o tipo, depois o nome da variavel, e por fim, um possivel valor
	// aqui, esta declarando na memoria um espaco sufucientemente grande  para armazenar valor do tipo int, onde possui o nome de idade
	int idade;
	float altura;
	// aqui esta sendo declarado o valor de idade
	idade = 19;
	altura = 1.90;
	// desta forma, será exibido o valor da variavel no texto.
	printf("Idade é: %d\nMinha altura é: %.2f\n", idade, altura);
	
	return 0; 
}

