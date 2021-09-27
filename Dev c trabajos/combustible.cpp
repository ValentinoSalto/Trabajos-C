#include <stdio.h>
#include <conio.h>


int litros, cont, acum, max, min, porc, prom, cont_2, rta;
int main(){
	
	do{
		printf("Ingrese la cantidad de litros a cargar:\n");
		scanf("%d", &litros);
		
		cont +=1;
		acum +=litros;
		
		if(cont==1||litros>max){
			max=litros;
		}
		if(litros>20){
			cont_2 += 1;
		}
		
		printf("Desea seguir cargando ? SI(1) NO(0):\n");
		scanf("%d", &rta);	
		
	}while(rta==1);
	
	
	porc= (cont_2*100)/cont;
	prom=acum/cont;
	
	printf("\nTotal de litros cargados:%d", acum);
	printf("\nMaximos de litros cargados:%d", max);
	printf("\nPromedio de litros:%d", prom);
	printf("\nPorcentaje de cargas mayores a 20:%%%d", porc);
	
	
	
	
	
}
