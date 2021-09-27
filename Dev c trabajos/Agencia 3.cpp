#include <stdio.h>
#include <conio.h>


int destino, cont, pasajeros, acum, max, min, acum_n, porcentaje, boletos;
int main(){
	
	printf("Ingrese su destino 1(nacional), 2(internacional:\n");
	scanf("%d", &destino);
	
	if(destino==0){
		printf("No hubo visitas:\n");
		return 0 ;
	}
	
	while(destino==1 || destino==2){
		
		cont += 1;
		printf("Ingrese la cantidad de pasajeros:\n");
		scanf("%d", &pasajeros);
		acum += pasajeros;
		
		if(cont==1 || pasajeros>max ){
			max=pasajeros;
		}
		
		if(destino==1){
			acum_n += pasajeros;
		}
		
		if(destino == 2){
			if( min == 0 || min> pasajeros){
				min = pasajeros;
			}
		}
		
		if(cont!=10){
		printf("Ingrese su destino 1(nacional), 2(internacional:\n");
		scanf("%d", &destino);
		}
			
		
	}
	

	boletos=acum;
	porcentaje= (acum_n*100) / boletos;
	printf("\nTotal de operaciones:%d", cont);
	printf("\nBoletos vendidos:%d", boletos);
	printf("\nCantidad maxima de pasajeros en una operacion:%d", max);
	printf("\nPorcentaje de boletos con destino nacional:%d", porcentaje);
	printf("\nMinima de boletos vendidos con destino internacional:%d", min);
	
	
	
	
	
	
	
	
	
	
getch();
	
	
	
	
	
	
	
	
}

