#include <stdio.h>
#include <locale.h>

 
int main() {
	setlocale (LC_ALL, "Portuguese_Brazil");
 
    int A, B, C, D;
    
    printf("Teste de Sele��o\n\n");
    
    printf("\nDigite o primeiro n�mero inteiro: ");
    scanf("%d", &A);
    
    printf("\nDigite o segundo n�mero inteiro: ");
    scanf("%d", &B);
    
    printf("\nDigite o terceiro n�mero inteiro: ");
    scanf("%d", &C);
    
    printf("\nDigite o quarto n�mero inteiro: ");
    scanf("%d", &D);
    
    if (B>C && D>A && C+D > A+B && C>0 && D>0 && A%2==0){
    
        printf("\nValores aceitos\n");
    } else {
    	printf("\nValores nao aceitos\n");
	}
    
   
    return 0;
}
