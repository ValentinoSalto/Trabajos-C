#include <stdio.h> 
#include <conio.h>  
#define anio_act 2021 
int anio_nac, edad; 
main()
{

 	printf ("Ingrese su año de nacimiento: ");
	scanf ("%d", &anio_nac );
	edad=anio_act-anio_nac;
	printf ("Su edad aproximada es %d", edad);
    getch();
}
