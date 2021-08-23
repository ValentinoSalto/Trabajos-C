#include <stdio.h>

int numero;

main(){
	printf("Ingrese un numero para saber si es positivo o negativo:\n");
		scanf("%f", &numero);
	
	if(numero < 0){
		printf("El numero ingresado es NEGATIVO");
	}
	else if(numero > 0){
		printf("El numero ingresado es POSITIVO");
	}
	else{
		printf("El numero ingresado es 0");
	}
}
