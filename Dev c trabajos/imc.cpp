#include <stdio.h>

float peso, altura, imc;

main(){
    printf("Ingrese su peso: (kg)\n");
        scanf("%f", &peso);
    
    printf("Ingrese su altura: (m)\n");
        scanf("%f", &altura);
    
    imc = peso / (altura * altura);
    
    printf("Su IMC es: %f \n", imc);

    if(imc < 18.5){
        printf("Usted tiene un peso inferior al normal");
    }
    else if(imc >= 18.5 && imc <= 24.9){
       printf("Usted tiene un peso normal");
    }
    else if(imc > 24.9){
        printf("Usted tiene un peso superior al normal");
    }
}

