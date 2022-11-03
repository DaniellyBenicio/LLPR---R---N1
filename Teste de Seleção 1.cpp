#include <stdio.h>
#include <locale.h>

 
int main() {
	setlocale (LC_ALL, "Portuguese_Brazil");
 
    int A, B, C, D;
    
    printf("Teste de Seleção\n\n");
    
    printf("\nDigite o primeiro número inteiro: ");
    scanf("%d", &A);
    
    printf("\nDigite o segundo número inteiro: ");
    scanf("%d", &B);
    
    printf("\nDigite o terceiro número inteiro: ");
    scanf("%d", &C);
    
    printf("\nDigite o quarto número inteiro: ");
    scanf("%d", &D);
    
    if (B>C && D>A && C+D > A+B && C>0 && D>0 && A%2==0){
    
        printf("\nValores aceitos\n");
    } else {
    	printf("\nValores nao aceitos\n");
	}
    
   
    return 0;
}
