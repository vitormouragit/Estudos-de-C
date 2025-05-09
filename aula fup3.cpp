#include <stdio.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "Portuguese");
	int assinatura, validade;
	
	printf("Documento possui assinatura? (1 - sim, 0 - não):");
	scanf("%d", &assinatura);
	
	printf("Documento está na validade? (1 - sim, 0 - não):");
	scanf("%d", &validade);
	
	if(assinatura && validade){
		printf("Documento válido");
	}else if(!assinatura){
		printf("Documento inválido");
	}else {
		printf("Documento expirado");
	}
	
	return 0;
}
