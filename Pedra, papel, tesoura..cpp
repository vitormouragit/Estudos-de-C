#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main(){
	setlocale (LC_ALL, "Portuguese");
	srand(time(NULL));
	int jogadaPC = (rand() % 3) + 1;
	int jogadaPlayer = 0;	

	printf("PEDRA, PAPEL E TESOURA\n");
	printf("Escolha sua jogada:\n");
	printf("[1]Pedra\n[2]Papel\n[3]Tesoura\n>> ");
	scanf("%d", &jogadaPlayer);
	
	if(jogadaPC == 1){
		printf("A maquina escolheu PEDRA!\n");
	}
	else if(jogadaPC == 2){
		printf("A maquina escolheu PAPEL!\n");
	}
	else{
		printf("A maquina escolheu TESOURA!\n");
	}

	if((jogadaPC == 1 && jogadaPlayer == 3) || (jogadaPC == 2 && jogadaPlayer == 1) || (jogadaPC == 3 && jogadaPlayer == 2)){
		printf("Você perdeu!\n");
	}
	else if(jogadaPC == jogadaPlayer){
		printf("Deu empate!\n");
	}
	else{
		printf("Voce venceu!\n");
	}

	return 0;
}
