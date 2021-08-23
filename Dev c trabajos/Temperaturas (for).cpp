#include <stdio.h>
#include <conio.h>

int i, cont_neg, cont_men, cont_mas;
float temp, acum_neg,max,min,porcen, prom;
main()
{
	for(i=0;i<10;i++)
	{
		printf("Ingresa una temperatura:");
		scanf("%f", &temp);
		if(temp>18)
		{
			cont_mas= cont_mas + 1; 
						}
		else {
			cont_men=cont_men + 1 ;
			
			if(temp<0)
			{
				cont_neg=cont_neg+ 1;
				acum_neg=acum_neg+ temp;
			}
		}                
		
		
	}
	
	porcen=(cont_men * 100)/10;
	if(cont_neg != 0 )
	{
		prom=acum_neg /cont_neg;
	}
	
	printf("Cantidad de temperaturas mayores a 18:%d \n", cont_mas);
	printf("El porcentaje de temperaturas menores es :%f \n", porcen);
	printf("El promedio de las temperaturas negativas es:%f \n", prom);

	
	
	
	
	
	
	getch();
}
