#include <stdio.h>
#include <locale.h>
 
int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
 
    printf("Tipos de triângulos\n\n");
	
	double A, B, C;
    double n1, n2, n3;
    
    n1;//maior
    n2;//medio
    n3;//menor
      
	printf("Informe o valor do primeiro lado: ");
	scanf("%lf", &A);
	
	printf("Informe o valor do segundo lado: ");
    scanf("%lf", &B);
    
    printf("Informe o valor do terceiro lado: ");
    scanf("%lf", &C);
    
  
    printf("\nForma triângulo? Se sim, qual o tipo?\n\n");
	if(A>=B && A>=C){
        n1 = A;
        
    if(B>=C){
        n2 = B;
        n3 = C;
    } else {
    	n2 = C;
        n3 = B;
	}
        
    }
    
    if(B>=A && B>=C){
        n1 = B;
        
    if(A>=C){
        n2 = A;
        n3 = C;
    } else {
    	 n2 = C;
        n3 = A;
	}
        
    } 
        
    if(C>=A && C>=B){
        n1 = C;
        
    if(A>=B){
        n2 = A;
        n3 = B;
    } else {
    	n2 = B;
        n3 = A;
	}
        
    }
	
	if(n1>=(n2+n3)){
        printf("NAO FORMA TRIANGULO\n");
    }
    
    if((n1*n1)==(n2*n2 + n3*n3) && (n1<n2+n3)){
        printf("TRIANGULO RETANGULO\n");
    }
    
    if((n1*n1)>(n2*n2)+(n3*n3) && (n1-n2<n3)){
        printf("TRIANGULO OBTUSANGULO\n");
    }
    
    if((n1*n1)<((n2*n2)+(n3*n3))){
        printf("TRIANGULO ACUTANGULO\n");
    }
    
    if(n1==n2 && n2==n3 && n3==n1){
        printf("TRIANGULO EQUILATERO\n");
    }
    
    if((n1==n2 && n1!=n3) || (n1==n3 && n3!=n2) || (n2==n3 && n2!=n1)){
        printf("TRIANGULO ISOSCELES\n");
    }
    
    return 0;
}
