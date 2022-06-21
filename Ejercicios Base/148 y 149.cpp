#include <stdio.h>
#include <iostream>
int main(){
	int N,max=0,p;
	printf("escriba la cantidad de elementos que desea evaluar \n");
	int vec[scanf("%d",&N)];
	printf("escriba el valor de los elementos \n");
	for(int i=0;i<N;i++){
		printf("---elmento %d---\n",i+1);
		scanf("%d",&vec[i]);
		
		if(max<vec[i]){
		 max=vec[i];
		 p=i+1;
		}
		if(vec[i]%3==0){
		 printf("|este valor (%d) es multiplo de 3\n",vec[i]);		 
		}		
	}
	
	
	
		printf("----------------------\n");
		printf("el mayor elemento es: %d \n",max);
		printf("y su posicion es: %d \n",p);
		return 0;	
}
