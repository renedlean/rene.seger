#include <stdio.h>
#include <stdlib.h>

int main(void){
	// variáveis
	float n1, n2, n3;
	
	// entrada de dados
	printf("Digite n1: ");
	scanf("%f",&n1);
	printf("Digite n2: ");
	scanf("%f",&n2);
    printf("Digite n3: ");
	scanf("%f",&n3);
	
	// processamento dos dados
	if ((n1 < n2 && n1 < n3) && (n2 < n3))
        printf ("%f , %f, %f",n1,n2,n3);
    else
        printf ("%f , %f, %f",n1,n3,n2);
    
    if ((n2 < n1 && n2 < n3) && (n2 < n3))
        printf ("%f , %f, %f",n2,n1,n3); 
    else
        printf ("%f , %f, %f",n2,n3,n1); 
    if  ((n3 < n1 && n3 < n2) && (n1 < n2))
        printf ("%f , %f, %f",n3,n1,n2);
    else         
        printf ("%f , %f, %f",n3,n2,n1);

    return 0;
}