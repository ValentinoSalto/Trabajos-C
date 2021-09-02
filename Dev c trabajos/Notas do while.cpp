#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

float porcentaje;
int notas, acum, cont, cont_apro, promedio, contmin, contmax, min, max;
int main(){



do{
	printf("Ingrese una nota:\n");
	scanf("%d",&notas);
	cont=cont + 1;
	acum=acum + notas;
	
	if(notas>=6){
		cont_apro=cont_apro + 1;
		
	}if( notas > max){
			max= notas;
			contmax= contmax + 1;
		}
		if(notas < min ){
			min=notas;
			contmin= contmin + 1;
		}
		
	
	
	
}while(notas>0);

	cont= cont - 1;
	promedio= acum / cont;
	porcentaje= (cont_apro * 100) / cont;
	
	
	printf("\nPromedio:%d", promedio);
	printf("\nPorcentaje de aprobadas:%f", porcentaje);
	printf("\nNota maxima:%d", max);
	printf("\nNota minimo:%d", min);
	
	
	

getch();	
	
	
}
