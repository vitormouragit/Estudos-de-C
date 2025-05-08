#include <stdio.h>
#include <math.h>  
#include <locale.h>

int main() {
	setlocale (LC_ALL, "Portuguese");
    double numero, raiz;

    printf("Digite um número para calcular a raiz quadrada: ");
    scanf("%lf", &numero);

    if (numero < 0) {
        printf("Erro: não é possível calcular a raiz quadrada de um número negativo.\n");
    } else {
        raiz = sqrt(numero);
        printf("A raiz quadrada de %.2f é %.2f\n", numero, raiz);
    }

    return 0;
}

