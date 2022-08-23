#include <stdio.h>
#include <stdlib.h>
main() {

 float num1,result;
 int num2,num3;

 printf("Informe um numero inteiro \n");
 scanf("%d",&num2);
 printf ("Informe outro inteiro \n");
 scanf("%d",&num3);
 printf ("Informe um numero real \n");
 scanf("%f",&num1);

result = ((2*num2) * (num3/2));
printf ("O produto do dobro do primeiro com metado do segundo e %f \n",result);

result = 0;
result = (3*num2)+num1;
printf ("A soma do triplo do primeiro com o terceiro e %f \n",result);

result = 0;
result = (num1*num1*num1);
printf("O cubo do terceiro é : %f \n",result);

}