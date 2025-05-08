#include <stdio.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "Portuguese");
	int num1, num2;
	float quociente;
	
	printf("Digite o primeiro número inteiro:");
	scanf("%d", &num1);
	
	printf("Digite o segundo número inteiro:");
	scanf("%d", &num2);
	
	printf("Soma: %d\n", num1 + num2);
    printf("Subtração: %d\n", num1 - num2);
    printf("Produto: %d\n", num1 * num2);
    
    if (num2 != 0){
    	quociente = (float) num1 / num2;
    	printf("Quociente: %.2f\n", quociente);
	}
    else{
    	printf("Divisão por zero não é permitida.\n");
	}
	return 0;
}
