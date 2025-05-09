#include <stdio.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "Portuguese");
	float temperatura, umidade;

printf("Entre com a temperatura em graus celsius:");
scanf ("%f", &temperatura);

printf("Entre com o valor da umidade em (%%):");
scanf("%f", &umidade);

if(temperatura >= 20 && temperatura <= 30 && umidade < 60){
	printf("Clíma adequado para o passeio\n");
}else {
	printf("Não adequado para o passeio\n");
}

	return 0;
}
