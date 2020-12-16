#include <stdio.h>

int main(){
    
float peso;
  printf("ingrese un indice de masa corporal:");
  scanf("%f",&peso);
  if (peso <18.5){
  	printf("usted tiene peso bajo");
  }
  else if(peso >= 18.5 && <= 24.9){    
  	printf("usted tiene un peso normal");
  }
  else if(peso >=25.0 && <= 29.9){
  	printf("usted tiene sobrepeso");
  }
  else if(peso >= 30 &&	<= 34.5){
  	printf("usted tiene obesidad tipo 1");
  }
  else if(peso >= 35 && <= 39.9){
  	printf("usted tiene obsesidad tipo 2")
  }
  else if(peso > 40){
  	printf("usted tiene hiper obesidad");
  }
  
}



