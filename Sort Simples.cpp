#include <stdio.h>
#include <locale.h>
 
int main() {
	setlocale(LC_ALL, "Portuguese_Brazil");
 
    int n1, n2, n3;
    int a; // maior
    int b; // medio
    int c; // menor
    
    printf("Sort Simples\n\n");
    
    printf("Leia 3 valores inteiros e ordene-os!\n\n");
	
	printf("\nDigite o primeiro valor: ");
    scanf("%d", &n1);
    
    printf("\nDigite o primeiro valor: ");
    scanf("%d", &n2);
    
    printf("\nDigite o primeiro valor: ");
    scanf("%d", &n3);
    
    if(n1>=n2 && n1>=n3){
        a=n1;
    
        if(n2>n3){
        b=n2;
        c=n3;
        }
        else {
        b=n3;
        c=n2;
        }
        
        printf("\nOs valores em ordem crescente são:%d\n%d\n%d\n", c, b, a);
        
    }
    
    if(n2>=n1 && n2>=n3){
        a=n2;
        
        if(n1>n3){
        b=n1;
        c=n3;
        }
        else{
        b=n3;
        c=n1;
        }
        printf("\nOs valores em ordem crescente são:\n%d\n%d\n%d\n", c, b, a);
    }
    
    if(n3>=n1 && n3>=n2){
        a=n3;
        
        if(n1>n2){
        b=n1;
        c=n2;
        }
        if(n2>n1){
        b=n2;
        c=n1;
        }
        printf("\nOs valores em ordem crescente são:\n%d\n%d\n%d\n", c, b, a);
    }
    
    
    
    printf("\n");
    printf("Os valores foram lidos na ordem:\n%d\n%d\n%d\n", n1, n2, n3);

    return 0;
}
