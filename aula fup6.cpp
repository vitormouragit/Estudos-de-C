#include <stdio.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "Portuguese");
	
	int velocidade;
	
	printf("Informe a velocidade do veiculo:\n");
	scanf("%d", &velocidade);
	
	if(velocidade < 40){
		printf("Baixa.");
	}else if(velocidade >= 40 && velocidade <=80){
		printf("Moderada.");
	}else{
		printf("Alta");
	}
	
	return 0;
}
