#include<stdio.h>
//Johand Esteban Castro Rodriguez cc:1018506713
//25/04/2018
//TEMA A
/*
  Se toma como datos la temperatura de cada dia del mes de junio los valores se deben capturar y almacenar en un vector
  se desea saber la temperatura promedio del mes de los dias impares y cual fue la temperatura mayor del mes y el dia respectivo
*/
int main(){
	float prome=0;
	int temp[30],mayor=0,imp=0,c=0,c2,aux;
	
	printf("por favor escriba la temperatura de cada dia que registro \n");
	for(int i=0;i<30;i++){
		printf("-dia %d- \n",i+1);
		scanf("%d",&temp[i]);		
	}
	for(int i=0;i<30;i++){
	        			
	for(int j=0;j<30;j++){
		if(temp[i]>temp[j]){
			aux=temp[i];
			if(aux>mayor){			
			mayor=temp[i];
			
			c2=i+1;
		}
		}
	}				
				
		if(i%2==1){
			imp=imp+temp[i];
			c++;				
		}
	
	}
    prome=imp/c;
	printf("promedio dias impares: %1.f \n",prome);
	printf("el dia con mayor temperatura es el %d con una temperatura de %d \n",c2,mayor);
	return 0;
	

}
	
	

