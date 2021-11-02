
#include <stdio.h>
#include <conio.h>

int edades[5], cont, acum, porc, i, pos, cont_menor, acum_menor, prom_menor, prom, min, cont_18, j, n=5, aux, encontrado=0, buscado;
 int main(){
 	
 	for(i=0; i<5; i++){
 		cont+=1;
 		printf("\nIngrese una edad:", i+1);
 		scanf("%d", &edades[i]);
 		acum+=edades[i];
 		prom=acum/cont;
 		if(cont==1||min>edades[i]){
 			min=edades[i];
 			pos=i;
		 }
		if(edades[i]>=18){
			cont_18+=1;
		}	
		
		if(edades[i]<prom){
			cont_menor+=1;
			acum_menor+=edades[i];
		}	
 		
 		
	}
	
	porc=(cont_18*100)/cont;
 	prom_menor=cont_menor/acum_menor;
 	
 	printf("\nEdad minima:%d Legajo:%d", min,pos);
 	printf("\nPorcentaje de mayores de edad:%d", porc);
 	printf("\nPromedio de menores al promedio:%d", prom_menor);
 	
 	
 	if(cont_18>0){
 		printf("\nSe registraron edades mayores a 18\n");
	 }else{
	 	printf("\nNo se registraron edades mayores a 18\n");
	 }
	 
	 // pido que numero desea buscar
	printf("Ingrese la cantidad de pacientes que hubo en un dia que desea buscar : ");
	scanf("%d", &buscado);
	
	// lo busco e imprimo
	for(i=0;i<n;i++){
		if(buscado==edades[i]){
			printf("El valor se encuentra en la posicion:%d\n", i);
			encontrado=1;
		}
	}
	if(encontrado==0){
			printf("No se encontro el valor:\n");
	}
	 
	 
 	// ordenamiento burbuja
	for(j = 1; j < n; j++){
		for(i = 0; i < n-j; i++){
			if(edades[i] > edades[i + 1]){
				aux = edades[i];
				edades[i] = edades[i + 1];
				edades[i + 1] = aux;
			}
		}
	}
	printf("Vector ordenado:\n");
	for(i = 0; i < n; i++){
		printf("%d ", edades[i]);	
	}
 	
 	
 	
 	
 	
 	getch();
 }
