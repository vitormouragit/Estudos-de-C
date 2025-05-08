#include <stdio.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL, "Portuguese");
    char nome[100];
    float nota1, nota2, nota3, media;

    printf("Digite o nome do aluno: ");
    fgets(nome, sizeof(nome), stdin);  

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3) / 3;

    printf("O aluno %sobteve média %.2f e está ", nome, media);
    
    if (media >= 6.0) {
        printf("Aprovado!\n");
    } else {
        printf("Reprovado.\n");
    }

    return 0;
}

