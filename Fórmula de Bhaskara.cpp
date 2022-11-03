#include <stdio.h>
#include <locale.h>
#include <math.h>//biblioteca de matem�tica

 
int main() {
	setlocale (LC_ALL, "Portuguese_Brazil");
	
	double A, B, C, delta, x1, x2;
	
	printf("F�rmula de Bhaskara\n\n");
	
	
	printf("Digite o primeiro n�mero: ");
    scanf("%lf", &A);
    
    printf("Digite o segundo n�mero: ");
    scanf("%lf", &B);
    
    printf("Digite o terceiro n�mero: ");
    scanf("%lf", &C);
    
    
	delta = ((B*B)-(4*A*C));
    // printf("%lf\n", delta)
    

    if(delta<0 || A==0){
    	printf("\nImpossivel calcular\n");
    } else {
    	x1 = (-B + sqrt(delta)) /(2*A);
    	x2 = (-B - sqrt(delta)) /(2*A);
    
    	printf("\nAs ra�zes da equa��o de Bhaskara s�o: \n\n");
		printf("R1 = %.5lf\n", x1);
    	printf("R2 = %.5lf\n", x2);
	}    
          

        
    return 0;
}
