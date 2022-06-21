#include <stdio.h>


int main(){
	float Precio_manz=1000,Cant_manz,Descuento=0,Precio_total;
	printf("cada manzana tiene un valor de 10000 \n");
	printf("escriba la cantidad de manzanas que desea \n");
	scanf("%f",&Cant_manz);
	if(Cant_manz>0 && Cant_manz<=2){
		Precio_total=Cant_manz*Precio_manz;
		}else{
			if(Cant_manz>=3 && Cant_manz<=5){
				Descuento=Precio_manz*Cant_manz*0.1;
				Precio_total=Precio_manz*Cant_manz;
				Precio_total=Precio_total-Descuento;
		
			}else{
				if(Cant_manz>=6 && Cant_manz<=10){
					Descuento=Precio_manz*Cant_manz*0.15;
				    Precio_total=Precio_manz*Cant_manz;
				    Precio_total=Precio_total-Descuento;
				}else{
					if(Cant_manz>=11){					
					Descuento=Precio_manz*Cant_manz*0.2;
				    Precio_total=Precio_manz*Cant_manz;
				    Precio_total=Precio_total-Descuento;
			     }
				}
			}
		}
		printf("%f debe pagar: \t",Precio_total);
     	printf("%f con un descuento de: \t",Descuento);
	}
	

