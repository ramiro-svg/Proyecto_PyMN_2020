#include<stdio.h>
#include<math.h>

int main(){
	float a,b,c,D;
	printf("introduce el valor del termino cuadratico");
	scanf("%f",&a);
	printf("introduce el valor del termino lineal");
	scanf("%f",&b);
	printf("introduce el valor del termino independiente");
	scanf("%f",&c);
	D= b*b-(4*a*c);
	
	if (D==0){
		printf("sol. %.2f\n", -b/(2*a));
	}
	else if (D>0){
		printf("sol.1: %.2f\n", (-b+sqrt(D))/(2*a));
		printf("sol.2: %.2f\n", (-b-sqrt(D))/(2*a));
	}
	else { /* D<0 */ 
	   printf("sol.1: %.2f+%.2f i\n",-b/(2*a),(sqrt(-D))/(2*a));
	   printf("sol.2: %.2f-%.2f i\n",-b/(2*a),(sqrt(-D))/(2*a));

		
	}
}
