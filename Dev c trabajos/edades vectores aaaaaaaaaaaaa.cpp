#include <stdio.h>
#include <conio.h>

int edades[5], i, prom, porc, mayor_prom, menor_18, cont_18, cont, acum, menores;
int main(){
	
	for(i=0; i<5; i++){
		printf("Ingrese una edad:\n");
		scanf("%d", & edades[i]);
		
		acum = acum + edades[i];
		cont = cont + 1;
		
		if(edades[i]>=18){
			cont_18 += 1;
		}
		
	
	
	}	
	
	porc= (cont_18*100)/cont;
	prom= acum/cont;
	
	for(i=0; i<5; i++){
	
	if(edades[i]<18){
			printf("La posicion de memoria menores a 18 es: %d \n", i);
		}
	}	
	for(i=0; i<5; i++){
		if(edades[i]>prom){
			printf("el numero mayor al promedio es: %d \n", edades[i]);
		}
	}

	
	
	
	
	
	
	printf("El promedio de edades es: %d \n", prom);
	printf("El porcentaje de los mayores de edad es: %%%d \n", porc);
		
	
	
	
	
	
}
