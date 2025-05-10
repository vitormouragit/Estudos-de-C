#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    char cliente[100];
    float compra;
    int fidelidade;

    printf("Qual o nome do cliente?\n");
    scanf("%s", cliente); 

    printf("Qual o valor da compra?\n");
    scanf("%f", &compra);

    printf("O cliente é membro do programa fidelidade? (1 - sim, 0 - não)\n");
    scanf("%d", &fidelidade);

    if (compra > 100 && fidelidade == 1) {
        printf("O cliente %s pode receber o desconto.\n", cliente);
    } else {
        printf("O cliente %s não pode receber o desconto.\n", cliente);
    }

    return 0;
}
