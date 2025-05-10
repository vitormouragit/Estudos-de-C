#include <stdio.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "Portuguese");
	
	int temperatura;
	
	printf("Informe a temperatura em graus celsius:\n");
	scanf("%d", &temperatura);
	
	if(temperatura < 15){
		printf("Fria.");
	}else if(temperatura >= 15 && temperatura <= 25){
		printf("Amena");
	}else{
		printf("Quente");
	}
		
	return 0;
}
