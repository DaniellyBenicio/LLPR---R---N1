#include <stdio.h>
#include <locale.h>
#include <math.h>//biblioteca de matemática

 
int main() {
	setlocale (LC_ALL, "Portuguese_Brazil");
	
	double A, B, C, delta, x1, x2;
	
	printf("Fórmula de Bhaskara\n\n");
	
	
	printf("Digite o primeiro número: ");
    scanf("%lf", &A);
    
    printf("Digite o segundo número: ");
    scanf("%lf", &B);
    
    printf("Digite o terceiro número: ");
    scanf("%lf", &C);
    
    
	delta = ((B*B)-(4*A*C));
    // printf("%lf\n", delta)
    

    if(delta<0 || A==0){
    	printf("\nImpossivel calcular\n");
    } else {
    	x1 = (-B + sqrt(delta)) /(2*A);
    	x2 = (-B - sqrt(delta)) /(2*A);
    
    	printf("\nAs raízes da equação de Bhaskara são: \n\n");
		printf("R1 = %.5lf\n", x1);
    	printf("R2 = %.5lf\n", x2);
	}    
          

        
    return 0;
}
