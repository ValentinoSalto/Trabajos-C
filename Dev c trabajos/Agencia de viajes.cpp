#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


int destino, pasajeros, cont_n, acum, max, min, porcentaje, cont, cont_in;

int main(){
	
	printf("Ingrese el destino 1(nacional), 2(internacional):\n"),
	scanf("%d", &destino);
	
	if(destino==0){
		printf("No hubo viajes:\n");
		return 0;
	}
	while(destino!=0 ){
		cont += 1;
		
		printf("Ingrese la cantidad de pasajeros que viajan:\n");
		scanf("%d", &pasajeros);
		
		acum += pasajeros;
	
		if(cont == 0 || pasajeros>max){
			max= pasajeros;
		}
		
		if(destino==1){
			cont_n += 1;
		}/*else{
			
			cont_in += 1;*/
			if(cont==1|| min>pasajeros ){
				min= pasajeros;	
			}
			
		//}
		printf("Ingrese el destino 1(nacional), 2(internacional):\n"),
		scanf("%d", &destino);
			
	}
	

	porcentaje = (cont_n * 100)/ cont;
	printf("\nTotal de operaciones:%d", cont);
	printf("\nBoletos vendidos:%d", acum);
	printf("\nCantidad maxima de pasajeros en una operacion:%d", max);
	printf("\nPorcentaje de boletos con destino nacional:%d", porcentaje);
	printf("\nMinima de boletos con destino internacional:%d", min);
	
	
	
	
	
	
	getch();	
}
