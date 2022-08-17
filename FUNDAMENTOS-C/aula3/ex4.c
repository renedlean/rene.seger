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
	if (n1 > n2 && n2 > n3)
        printf ("Numero 1 maior");
    else
        if (n2 > n1 && n2 > n3)
            printf ("Numero 2 maior");
        else
            printf ("Numero 3 maior");   	
	

    return 0;
}