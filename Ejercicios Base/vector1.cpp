#include<stdio.h>
int main(){
	// 1)declarar vector de 10 posiciones de tipo flotante(real)
	float vec[10];
	
	// 2)declarar el indice (i) para usarlo en el codigo
	int i;
	float aux=0;
	
	// 3)realizar el llenado del vector sin variables
	for(i=0;i<10;i++){		
		printf("digite el valor: %d \n",i+1);
		
		scanf("%f",&vec[i]);		
	}
	
	// 4)imprimir el contenido del vector
	for(i=0;i<10;i++){
		printf("vector %d: \t",i+1);
		printf("%.2f \n",vec[i]);		
	}
	
	// 5)hallar la suma de todos los datos del vector
		for(i=0;i<10;i++){
			aux=aux+vec[i];		
	}
	printf("la suma de los datos es: %.2f \n",aux);
	
	// 6)imprimir el promedio de los numeros almacenados en el vector	
	printf("el promedio es: %.2f",aux/i);
	
	// 7)VAAAALE TIO
	
}
