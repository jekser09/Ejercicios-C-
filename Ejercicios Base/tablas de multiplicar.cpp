#include<stdio.h>
#include<iostream>
int main(){
	int mutdo=2,mutdor=0,rs;
	
	while(mutdo<=9){	  
	  mutdor=1;
	  printf("\n tabla del %d \n",mutdo);
		while(mutdor<=10){
			rs=mutdo*mutdor;		
			printf("%d*",mutdo);
			printf("%d",mutdor);
			printf("=%d \n",rs);
			mutdor=mutdor+1;		
		}		
		mutdo++;
		
		
	}
}
