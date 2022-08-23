#include <stdio.h>
#include <stdlib.h>
main(void) {

 float imp, valor;
 int dias;

 printf("Informe os dias trabalhados:\n");
 scanf("%d",&dias);
 
 valor=(dias*25);
 imp=(valor*0.08);
 valor = (valor - imp);


 printf ("O valor liquido a ser pago e %f\n",valor);
}