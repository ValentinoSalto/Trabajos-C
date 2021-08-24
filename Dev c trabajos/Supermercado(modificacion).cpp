#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int cantidad, cont, acum_1, acum_2, precio, subtotal, total, i, producto;
int main()

{	
	do{
		
	
	printf("\nIngrese una cantidad:\n");
	scanf("%d", &cantidad);
	
	printf("\nIngrese el precio:\n");
	scanf("%d", &precio);
	
	subtotal= precio * cantidad;
	
	printf("\nSubtotal:%d", subtotal);
	
	
	
	acum_1=acum_1 + subtotal;
	
	acum_2=acum_2 + cantidad;
	
	printf("\nDesea agregar mas productos si o no 1/2?:\n");
	scanf("%d", &producto);
	
	
	}while (producto==1);
	
	printf("\nTotal:%d", acum_1);
	printf("\nCantidad:%d", acum_2);
	
	
	getch();
	
	
}
