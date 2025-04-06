# include <stdio.h>

// explicando um for, loop
// for é uma estrutura de repeticao onde podemos usa-la de diferentes formas em diferentes situacoes, percorrer listas, arrays e etc

int main(){
// o for é dividido em 3 partes, inicializacao, condicao, incremento/decremento,
// o for é tao independente, que pode existir apenas com a condicao, sem inicializador nem incremento/decremento
// a variavel contador, esta sendo declarada logo no inicio, separando na memoria, um espaco suficientemente grande

	int contador;
	// fluxo do for
	// faca sempre este roteiro para entender o for de cabeca
	// contador recebe/inicia valendo/recebendo 1
	// onde, contador é menor que 10?, se sim, PRINT e incremente ++ em contador

	// se nao entendeu presta atencao.
	// o for comeca na inicializacao, pergunta pra condicao, printa ou realiza algo, e incrementa
	// caso nao atenda a condicao, ele simplesmente sai do for
	for (contador = 1; contador < 10; contador++){
		printf("Imprimindo contador: %d\n", contador);
	}

	// for infinito
	//int infinito;

	//for (infinito = 1; infinito < 10; ){
	//	printf("For infinito\n");
	//}



	// while enquanto
	// percebe-se que o while tem seu inicializador no fora de seus parenteses
	// somente sua condicao fica entre parenteses
	// e o incremento/decremento vem ao final, este é o mesmo ciclo do for, a mudanca é so na arquitetura do while
	int contWhile = 1;

	while (contWhile <= 10){
		printf("Contador While de 1 a 10: 0%d\n", contWhile);
		++contWhile;
	}

	int contWhile2 = 1;

        while (contWhile2 < 5){
                printf("Contador While de 1 a 4: %d\n", contWhile2);
                ++contWhile2;
        }

	// while infinito
	//int contWhileInf = 1;

        //while (contWhileInf <= 10){
        //        printf("Contador While Infinito: %d\n", contWhileInf);
        //}






}

