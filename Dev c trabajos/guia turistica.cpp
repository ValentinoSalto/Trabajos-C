#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int edad, si_no, cont_guia, cont_singuia, cont, acum_singuia, max, min, i, porc, prom, min_solo; 
int main(){
	
	printf("Ingrese la edad, si desea terminar el programa ingrese 0:\n");
	scanf("%d", &edad);
	printf("Ingrese 1 si quiere con visita o 0 si no quiere:\n");
	scanf("%d", & si_no);
	
	
	
	while( edad!=0 && i<10){
		i++;
		cont= cont + 1;
		if(si_no==0){
			cont_singuia=cont_singuia + 1;
			acum_singuia=acum_singuia + edad;			
			if(min_solo == 0 || edad < min_solo){
				min_solo = edad;
			}
		}else{
			cont_guia=cont_guia + 1;
			
		}
		if(i == 1 || edad > max){
			max = edad;
		}
		if(i == 1 || edad < min){
			min = edad;
		}
		if(i<10){
		
		printf("Ingrese la edad, si desea terminar el programa ingrese 0:\n");
		scanf("%d", &edad);
		printf("Ingrese 1 si quiere con visita o 0 si no quiere:\n");
		scanf("%d", & si_no);
		}	
	}
	
	if(i==0){
		printf("No hubo visitas:\n");
		return 0 ;
	}
	porc = (cont_guia*100) / cont;
	
	if(cont_singuia>0){
		prom=acum_singuia / cont_singuia;
	}
	printf("Hubo %d visitas \n", i);
	printf("Rango de edades entre %d, %d\n", min, max);
	printf("Porcentaje de personas con guia:%d\n", porc);
	printf("Promedio de edades de personas sin guia:%d\n", prom);
	printf("Edad minima de personas sin guia:%d\n", min_solo );
	
	getch();
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
