#include <stdio.h>
#include <locale.h>

 
int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
 
    int S, T, F;

    printf("Fuso Horário\n\n");
    
	printf("Digite a hora de saída: ");
	scanf("%d", &S);
	
	printf("Digite o tempo de viagem: ");
	scanf("%d", &T);
	
	printf("Digite o fuso do destino com relação à origem: ");
	scanf("%d", &F);
	
	
    printf("Hora de chegada do voo no destino é: ");
	
	if(S+T+F>=24){
    	printf("%d\n", S+T+F-24);
    } else if ((S+T+F)>=0 && S+T+F<24){
		printf("%d\n", S+T+F);
    } else {
    	printf("%d\n", S+T+F+24);
	}
	
    return 0;
}
