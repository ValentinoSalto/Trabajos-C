#include <stdio.h>
#include <conio.h>

main()
{
	float radio,area;

	printf("Ingresa el valor del radio \n");
	scanf("%f",&radio);
	area=3.1416*(radio*radio);
	printf("El area del circulo es: %.2f \n",area);
	getch();
	
	
}
