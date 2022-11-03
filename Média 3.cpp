#include <stdio.h>
#include <locale.h>
 
int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
 
    float N1, N2, N3, N4, Media, R, Exame, MF;
    
    printf("Informe a primeira nota: ");
	scanf("%f", &N1);
	
	printf("\nInforme a segunda nota: ");
    scanf("%f", &N2);
    
    printf("\nInforme a terceira nota: ");
    scanf("%f", &N3);
    
    printf("\nInforme a quarta nota: ");
    scanf("%f", &N4);

    
    Media = (N1*2+N2*3+N3*4+N4*1)/10;
        printf("\nA média do aluno foi: %.1f\n", Media);
        
    if(Media>=7.0){
        printf("\nAluno aprovado.\n");
    } else if (Media<5.0){
	 	printf("\nAluno reprovado.\n");
	}
       
    if(Media>=5.0 && Media<7.0){
        printf("\nAluno em exame.\n");
    
    printf("Digite a nota do exame: ");
	scanf("%f", &Exame);
    
    printf("\nNota do exame: %.1f\n", Exame);
    
    R = (Media + Exame)/2;    
    
    if(R>=5.0){
        printf("Aluno aprovado.\n");
    } else {
    	printf("Aluno reprovado.\n");
	}           
    
    MF = R;
    printf("Media final: %.1f\n", MF);
    }
    return 0;
}

