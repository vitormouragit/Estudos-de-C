#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num1, num2, num3, maior;
	
	printf("Digite o primeiro número inteiro:");
	scanf("%d", &num1);
	
	printf("Digite o segundo número inteiro:");
	scanf("%d", &num2);
	
	printf("Digite o terceiro número inteiro:");
	scanf("%d", &num3);
	
	maior = num1;
	
	if (num2 > maior){
        maior = num3;
	}
	if (num3 > maior){
		maior = num3;
	}
	
	printf("O maior número é: %d\n", maior);
	
	return 0;
}
