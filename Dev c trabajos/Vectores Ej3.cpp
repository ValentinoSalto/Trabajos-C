#include <stdio.h>
#include <conio.h>

int notas[5], acum, cont, porc, prom, prom_8, cont_8, acum_8, i, cont_6; 
int main(){
	
	for(i=0;i<5;i++){
		printf("Ingrese nota %d:\n", i+1);
		scanf("%d", &notas[i]);
		acum+=notas[i];
		cont+=1;
		
		if(notas[i]>=6){
			cont_6+=1;
		}
		if(notas[i]<8){
			cont_8+=1;
			acum_8+=notas[i];
		}
	}
	
	porc=(cont_6*100)/cont;
	prom=acum/cont;
	prom_8=acum_8/cont_8;
	
	
	for(i=0;i<5;i++){
		if(notas[i]>8){
			printf("Alumno con nota mayor a 8:%d\n", i+1);
		}
	}

	printf("Promedio:%d\n", prom);
	printf("Porcentaje de aprobados:%d\n", porc);	
	printf("Promedio de notas menores a 8:%d\n", prom_8);







getch();

}

