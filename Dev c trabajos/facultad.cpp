#include <stdio.h>
#include <conio.h>


int materias, rta, cont, acum, cont_pro, cont_4, cont_5, cont_8, prom, porc, porc_4, porc_5, porc_8, porc_pro, max, promo;
int main(){
	
	do{
		printf("Ingrese la cantidad de materias que cursa:\n");
		scanf("%d", &materias);
		
		cont +=1;
		acum +=materias;
		
		printf("Usted promociono alguna materia?, SI(1) NO(2):\n");
		scanf("%d", &promo);
		
		if(promo==1){
			cont_pro +=1;
		}
		if(materias>=1 && materias<=4){
			cont_4 +=1;
		}
		if(materias>=5 && materias<=8){
			cont_5 +=1;
		}
		if(materias>8){
			cont_8 +=1;
		}
		
		if(cont==1 || materias>max){
			max=materias;
		}
		
		printf("Desea seguir cargando datos?, SI(1) NO(0):\n");
		scanf("%d", &rta);
		
	}while(rta==1);
	
	prom= acum/cont;
	porc_4= (cont_4*100)/cont;
	porc_5= (cont_5*100)/cont;
	porc_8= (cont_8*100)/cont;
	porc_pro= (cont_pro*100)/cont;
	
	printf("\nPorcentaje de alumnos que cursa de 1 a 4 materias:%%%d", porc_4 );
	printf("\nPorcentaje de alumnos que cursa de 5 a 8 materias:%%%d", porc_5);
	printf("\nPorcentaje que cursa mas de 8 materias:%%%d", porc_8 );
	printf("\nPorcentaje de alumnos que promociono materias:%%%d", porc_pro);
	printf("\nPromedio de materias cursadas por alumno:%d", prom);
	printf("\nCantidad de materias maxima cursadas por un alumno:%d", max);
	
	
	
	
	
	
	
getch();	
	
}
