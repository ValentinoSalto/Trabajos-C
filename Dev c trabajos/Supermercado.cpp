#include <stdio.h>
#include <stdlib.h>

int cantidad, cont, acum_1, acum_2, precio, subtotal, total, i ;
int main()

{	for(i=0;i<3;i++){

	printf("\nIngrese una cantidad\n");
	scanf("%d", &cantidad);
	
	printf("\nIngrese el precio:\n");
	scanf("%d", &precio);
	
	subtotal= precio * cantidad;
	
	printf("\nSubtotal:%d", subtotal);
	
	
	
	acum_1=acum_1 + subtotal;
	
	acum_2=acum_2 + cantidad;
	
	}
	
	printf("\nTotal:%d", acum_1);
	printf("\nCantidad:%d", acum_2);
	
	
	
	
	
}
