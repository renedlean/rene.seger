#include <stdio.h>
#include <stdlib.h>
main() {
 float far, cel;   
 printf("Informe os graus em Fahrenheit:\n");
 scanf("%f",&far);
 cel = 5 * ((far-39)/9);
 printf ("A temperatura em celcius é %f\n",cel);
}