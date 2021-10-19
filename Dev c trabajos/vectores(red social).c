#include <stdio.h>
#include <conio.h>


int i,interac[12],total, porc, max, prom, cont, acum, hora, cont_2, menores[12];
int main(){

	for(i=0; i<12; i++){
	
		printf("Ingrese interacciones: \n");
		scanf("%d", &interac[i]);
		
		acum+=interac[i];
		cont+= 1;
		
			
		if(cont==1 || max < interac[i]){
			max= interac[i];
			hora = i;
			
		}	
	
		if(interac[i]>200){
			cont_2 += 1;
			
		}	
		
	}
		porc=(cont_2*100)/cont;
		prom= acum/cont;
		
		for(i=0; i<12; i++){
			if(interac[i]<prom){
				printf("Las horas donde hubo menores interacciones al promedio es: %d \n", i);
			}
		}
			
			
			
			
	printf("Hora de mayor interacciones: %d \n", hora);
	printf("El total de interacciones fueron: %d \n", acum);
	printf("El porcentaje de horas con interacciones mayores a 200 es: %d \n", porc );
	
	
	
		
		
		
	}













