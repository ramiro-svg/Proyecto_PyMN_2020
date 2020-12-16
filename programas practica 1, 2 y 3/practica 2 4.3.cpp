#include<stdio.h>
#include<math.h>
#include<conio.h>
main ()
{
float a,b,c,d,x1,x2;
printf ("Listo para encontrar las soluciones de una ecuacion cuadratica?");
printf ("\t\t\t\tIntroduce el coeficiente del termino cuadratico:");
scanf ("%f",&a);
printf ("\t\Introduce el coeficiente del termino lineal:");
scanf ("%f",&b);
printf ("\t\Introduce el coeficiente del termino independiente:");
scanf ("%f",&c);
if (a!=0){
printf ("Aqui vamos...");}
else{
printf ("No es posible realizar la operacion");}
d=sqrt(b*b-(4*a*b));
if (d>0)
{
x1=((b*-1)+(d))/(2*a);
x2=((b*-1)-(d))/(2*a);
printf ("\t\El resultado de x1 es: %f",x1);
printf ("\t\El resultado de x2 es: %f",x2);
}
else{
printf("No es posible realizar la operacion, revisa tus datos");
}

getch ();
}
