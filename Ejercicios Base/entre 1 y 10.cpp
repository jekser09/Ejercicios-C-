#include<stdio.h>
#include<iostream>
int main(){
	int mutdor2=0,mutdor=0,rs,num1,num2,c=0;
	while (c<1){
	
	 printf("por favor escriba dos numeros entre 1 y 10 y que sean diferentes \n");
	 printf("--1-- \n");
	 scanf("%d",&num1);
	 printf("--2-- \n");
	 scanf("%d",&num2);
	 if(num1==num2){
	 	c=0;
	 	printf("numeros diferentes por favor \n");
	 	printf("-----------------------------\n");
	 }else{
	 	if(num1>num2){
	 		printf("el numero mayor es: %d \n",num1);
		 }else{
		 	printf("el numero mayor es: %d \n",num2);
		 }
		 printf("----------Tablas de multiplicar----------\n");
	 	c=1;
	 	
	 }
    }
    printf("tabla del %d: \n",num1);
		while(mutdor<=10){
			rs=num1*mutdor;	
			printf("%d*",num1);
			printf("%d",mutdor);
			printf("=%d \n",rs);
			mutdor++;
		}
	printf("tabla del %d: \n",num2);
		while(mutdor2<=10){
			rs=num2*mutdor2;	
			printf("%d*",num2);
			printf("%d",mutdor2);
			printf("=%d \n",rs);
			mutdor2++;
		}
}
