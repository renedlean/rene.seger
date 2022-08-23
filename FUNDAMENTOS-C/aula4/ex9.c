#include <stdio.h>
main() {
  
 float nota1, nota2, nota3, nota4, media; 

 printf("Informe a primeira nota: \n");
 scanf("%f",&nota1);
 printf("Informe a segunda nota: \n");
 scanf("%f",&nota2);
 printf("Informe a terceira nota: \n");
 scanf("%f",&nota3);
 printf("Informe a quarta nota: \n");
 scanf("%f",&nota4);
 media = (nota1+nota2+nota3+nota4) / 4;

 printf ("A media final e: %f \n",media);

}