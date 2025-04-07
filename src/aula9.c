#include <stdio.h>

// ciclos dentro de ciclos

int main(){
	// este for, inicia i em 0, printa, e executa outro for  que faz a mesma logica
	for(int i = 0; i <= 10; i++){
		printf("**Volta %d\n", i);
		for(int j = 1; j <= 10; j++){
			printf("Pronto %d\n", j);
		}
	}

}
