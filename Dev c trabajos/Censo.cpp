#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int prom_ed, edad_maxima, acum, cont_mas, cont_fem, i, n, genero,edad, cont, porcentaje;
int main()

{
	printf("\nIngrese la cantidad de censados:\n");
	scanf("%d", & n);
	
	for(i=0;i<n;i++){
		printf("\nCual es el genero mas/fem (1/2)\n:");
		scanf("%d",&genero);
		printf("\nCual es su edad:\n");     
		scanf("%d", &edad);    
		acum=acum + edad;    
		
		if(genero<2){
			cont_mas=cont_mas + 1;
			
		}else{
			cont_fem= cont_fem + 1;
		}    
		printf("--------------------------") ;                     
	}
	cont=cont_mas + cont_fem;
	prom_ed=acum / n;
	porcentaje=cont_mas * 100 / cont ;
	
	printf("\nEl porcentaje de hombreses:%d", porcentaje);	
	printf("\nEl promedio de edades es:%d", prom_ed );
	
	getch();
	
}
