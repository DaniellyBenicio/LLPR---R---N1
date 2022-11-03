#include <stdio.h>
#include <locale.h>
 
int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
	 
    int inicio, fim;
    printf("Tempo de jogo\n\n"); 
    printf("Cálulo de duração do jogo\n\n");
        
    
    printf("Digite a hora inicial do jogo: "); 
	scanf("%d", &inicio);
	
    printf("Digite a hora final do jogo: "); 
	scanf("%d", &fim);

    if(inicio<fim){
       printf("\nO JOGO DUROU %d HORA(S)\n", fim-inicio); 
    }
    
    
    if(!(inicio<fim)){
       printf("\nO JOGO DUROU %d HORA(S)\n", 24-inicio+fim); 
    }
   
    return 0;
    }
