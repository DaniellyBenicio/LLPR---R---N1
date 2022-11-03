#include <stdio.h>

#include <locale.h>
 
int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	printf("\nÍmpar, Par ou Roubo\n\n");

    int p,j1, j2, r, a, s;
    
    printf("Escolha do jogador (Par ou Ímpar): ");
    scanf("%i", &p);
    
    printf("\nNúmero escolhido pelo jogador 1: ");
    scanf("%i", &j1);
    
    printf("\nNúmero escolhido pelo jogador 2: ");
    scanf("%i", &j2);
    
    printf("\n Jogador 1 roubou?\n 1 - Sim\n 0 - Não\n Resposta: ");
    scanf("%i", &r);
    
    printf("\nJogador 2 acusou?\n 1 - Sim\n 0 - Não\n Resposta: ");
    scanf("%i", &a);

    s = j1 +j2;
    
     if( r == 1) {
    	if( a == 1) {
    		printf("\nJogador 2 ganha!\n");	
		} else {
			printf("\nJogador 1 ganha!\n");	
		}
	} else {
		if( ( s % 2 == 0 && p == 1) || (s % 2 == 1 && p == 0) ){
			printf("\nJogador 1 ganha!\n");
		} else {
			printf("\nJogador 2 ganha!\n");
		}
	}
    
   
    return 0;
}
