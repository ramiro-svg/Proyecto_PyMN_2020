#include<stdio.h>

int main(){
	float opcion, cant_pagar, desc, preciofinal;
	
      printf("1) perfumeria\n");
	  printf("2) salchichoneria\n");
	  printf("3) carniceria\n");
	  printf("4) limpieza\n");
	
	  switch(opcion){
	  	  case 1:
	  	  	  printf("cantidad a pagar\n");
	  	  	  scanf("%f",&cant_pagar);
	  	  	  desc = cant_pagar*0.20;
	  	  	  preciofinal = cant_pagar-desc;
	  	  break;
		  case 2:
		  	   	  	  	  printf("cantidad a pagar\n");
	  	  	  scanf("%f",&cant_pagar);
	  	  	  desc = cant_pagar*0.40;
	  	  	  preciofinal = cant_pagar-desc;
		  break;
		  case 3:
		  	   	  	  	  printf("cantidad a pagar\n");
	  	  	  scanf("%f",&cant_pagar);
	  	  	  desc = cant_pagar*0.20;
	  	  	  preciofinal = cant_pagar-desc;
		  break;
		  case 4:
		  	   	  	  	  printf("cantidad a pagar\n");
	  	  	  scanf("%f",&cant_pagar);
	  	  	  desc = cant_pagar*0.35;
	  	  	  preciofinal = cant_pagar-desc;
		  break;
		  default:
		  	 printf("area no existente");
		  break;	 
	  }
}
