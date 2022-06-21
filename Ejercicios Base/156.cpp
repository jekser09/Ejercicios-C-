#include<stdio.h>
int main(){
	int N,sum=0;

	
	printf("cantidad de elementos\n");
	int vec[scanf("%d",&N)];	
	printf("digite los elementos\n");
		for(int i=0;i<N;i++){
			scanf("%d",&vec[i]);			
		}
		for(int i=0;i<N;i++){
			sum=sum+vec[i];
			if(i==0){
				printf("%d -",sum); printf("%d\t",vec[i]);
				sum=sum-vec[i];
				printf("primero: %d\n",sum);
			}else{
			
			if(i*2==N-1){
				printf("%d -",sum); printf("%d\t",vec[i]);
				sum=sum-vec[i];
				printf("centro impar: %d\n",sum);			
			}else{
			if(i*2==N && i!=1){
				printf("%d -",sum); printf("%d\t",vec[i]);
				sum=sum-vec[i];
				printf("%d -",sum); printf("%d\t",vec[i]);
				sum=sum-vec[i];
				printf("centro par: %d\n",sum);
			}}
			if(i+1==N){
				printf("%d -",sum); printf("%d\t",vec[i]);
				sum=sum-vec[i];
				printf("ultimo: %d\n",sum);
			}}
									
			printf("suma: %d\t\n",sum);	
		}
			
	printf("suma: %d\t",sum);
 return 0;
}
