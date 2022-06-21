#include<stdio.h>
int main(){
	long int N,i;
	float prom;
	printf("cantidad de elementos \n");
	long int vec[scanf("%d",&N)];
	printf("escriba el valor de los elementos\n");
	for(i=0;i<N;i++){
		scanf("%d",&vec[i]);
		prom=prom+vec[i];		
	}
	prom=prom/i;
	printf("el promedio es: %f\n",prom);
	float mep[N],map[N];
	for(i=0;i<N;i++){	
	if(vec[i]<=prom){
		mep[i]=vec[i];
		printf("menor o igual que el promedio: %2.f \n",mep[i]);
	}else{
		if(vec[i]>prom){
		map[i]=vec[i];
		printf("mayor que el promedio: %2.f \n",map[i]);
	 	}
	}
	
	}
	printf("--elementos-- \n \n");	
}
