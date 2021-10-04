#include <stdio.h>
#include <conio.h>

int vector[10], i, edades;

// 
int main(){
	
	for(i=0;i<10;i++){
		
		printf("Ingrese un numero para la posicion:\n", i);
		scanf("%d", & vector[i]);
	}
	printf("\n");
	
	for(i=0; i<10; i++){
		printf("_____");
	}
	
	printf("\n");
	
	for(i=0;i<10;i++){
		printf("| %d |" , vector[i]);
		
	}
	printf("\n");
	
	for(i=0; i<10; i++){
		printf("_____");
	}
	
	
	
	
	
	getch();
	
	
	
	
	
	
}
