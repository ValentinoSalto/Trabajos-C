#include <stdio.h>

int numero;

main(){
	printf("Ingrese un numero: \n");
		scanf("%f", &numero);
		
	if(numero == 0){
		printf("El numero ingresado es 0");
	}
	else{
		printf("El numero ingresado NO es 0");
	}
}


