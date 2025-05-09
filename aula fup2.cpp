#include <stdio.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "Portuguese");
	int energia, sinal;
	
	printf("A energia está ativa? (1 - sim, 0 - não):");
	scanf("%d", &energia);
	
	printf("O sinal está ativo? (1 - sim, 0 - não):");
	scanf("%d", &sinal);
	
	if(energia == 1 && sinal == 1){
		printf("Em operação");
	}else if(energia == 0 && sinal == 1){
		printf("Modo de espera");
	}else{
		printf("Desligado");
	}
	
	return 0;
	}
