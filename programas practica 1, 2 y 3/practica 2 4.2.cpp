#include<stdio.h>

int main()
{

int edad;
printf("cual es tu edad?\n");
scanf("%d",&edad);
     if (edad>=18){
     	printf("eres mayor de edad ");
	 }
	 else if(edad<18){
	 	printf("eres menor de edad");
	 }

return 0;
}
