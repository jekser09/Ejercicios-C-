#include<stdio.h>
int main(){
	int vec1[]={4,85,65,78,9},vec2[]={8,32,13,65,12},vec3[5],prod,i=0;
		
	
		for(int j=4;j>=0;j--){
			
			printf("%d*",vec1[i]);
			printf("%d \n",vec2[j]);
			prod=vec2[j]*vec1[i];		
			vec3[i]=prod;
			i++;
		}	
		
	
	printf("productos\n");
	for(int i=0;i<5;i++){
		
		printf("%d \t",vec3[i]);
	}
}
