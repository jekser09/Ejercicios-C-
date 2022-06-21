#include<stdio.h>
int main(){
	int vec1[]={4,85,65,78,9},vec2[]={8,32,13,65,12},vec3[5],vec4[5],vec5[5],prod,suma,resta;
		
	
		for(int i=0;i<5;i++){		
			prod=vec2[i]*vec1[i];	
			vec3[i]=prod;
			
		}		
		for(int i=0;i<5;i++){	
			suma=vec2[i]+vec1[i];		
			vec4[i]=suma;
			
		}
		
		for(int i=0;i<5;i++){			
			resta=vec2[i]-vec1[i];		
			vec5[i]=resta;
			
		}	
	printf("productos\n");
	for(int i=0;i<5;i++){
		
		printf("%d \t \n",vec3[i]);
	}
		printf("suma\n");
	for(int i=0;i<5;i++){
		
		printf("%d \t \n",vec4[i]);
	}
			printf("resta\n");
	for(int i=0;i<5;i++){
		
		printf("%d \t \n",vec5[i]);
	}
	return 0;
}
