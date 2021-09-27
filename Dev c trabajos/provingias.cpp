#include <stdio.h>
#include <conio.h>

int i, habitantes, cont_2, max, porcentaje, promedio, cont, acum; 
int main(){
	
	for(i=0;i<5;i++){
		
		printf("Ingrese cantidad de habitantes:\n");
		scanf("%d", &habitantes);	
		
		cont += 1;
		acum += habitantes;
		
		if(cont==1||habitantes>max){
			max=habitantes;
		}
		if(habitantes>100){
			
			cont_2 += 1;
			
		}
		
	}
	
	porcentaje= (cont_2*100)/cont;
	promedio=acum/cont;
	
	printf("\nLa provincia con mayor cantidad de habitantes tiene:%d", max);
	printf("\nPorcentaje de provincias con mas de 100 habitantes:%d", porcentaje);
	printf("\nSumatoria de habitantes:%d", acum);
	printf("\nPromedio de habitantes:%d", promedio);
	
	
	getch();
	
}
