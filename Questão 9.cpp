#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
    int valor, restante;
    int n100, n50, n20, n10, n5, n1;

    printf("Digite o valor do saque (inteiro): R$ ");
    scanf("%d", &valor);

    restante = valor;

    n100 = restante / 100;
    restante = restante % 100;

    n50 = restante / 50;
    restante = restante % 50;

    n20 = restante / 20;
    restante = restante % 20;

    n10 = restante / 10;
    restante = restante % 10;

    n5 = restante / 5;
    restante = restante % 5;

    n1 = restante;

    printf("Notas necessárias para R$%d:\n", valor);
    if (n100 > 0) printf("%dx R$100\n", n100);
    if (n50 > 0)  printf("%dx R$50\n", n50);
    if (n20 > 0)  printf("%dx R$20\n", n20);
    if (n10 > 0)  printf("%dx R$10\n", n10);
    if (n5 > 0)   printf("%dx R$5\n", n5);
    if (n1 > 0)   printf("%dx R$1\n", n1);

    return 0;
}

