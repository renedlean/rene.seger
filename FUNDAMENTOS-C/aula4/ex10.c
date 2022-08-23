#include <stdio.h>
main() {
  
 float hora, total, horast; 

 printf("Qual o valor da hora trabalhada?: \n");
 scanf("%f",&hora);
 printf("Quantas horas foram trabalhadas no mes atual?: \n");
 scanf("%f",&horast);

 total = hora*horast;

 printf ("O salario a receber e: %f \n",total);

}