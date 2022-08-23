#include <stdio.h>
#include <stdlib.h>
main(void) {
 float far, cel;   
 printf("Informe os graus em Celcius:\n");
 scanf("%f",&cel);
 far = ((cel*1.8) + 32);
 printf ("A temperatura em Fahrenheit é %f\n",far);
}