#include <stdio.h>
#include <locale.h>

 
int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
 
    int S, T, F;

    printf("Fuso Hor�rio\n\n");
    
	printf("Digite a hora de sa�da: ");
	scanf("%d", &S);
	
	printf("Digite o tempo de viagem: ");
	scanf("%d", &T);
	
	printf("Digite o fuso do destino com rela��o � origem: ");
	scanf("%d", &F);
	
	
    printf("Hora de chegada do voo no destino �: ");
	
	if(S+T+F>=24){
    	printf("%d\n", S+T+F-24);
    } else if ((S+T+F)>=0 && S+T+F<24){
		printf("%d\n", S+T+F);
    } else {
    	printf("%d\n", S+T+F+24);
	}
	
    return 0;
}
