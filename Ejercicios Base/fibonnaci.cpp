#include<stdio.h>
#include<iostream>
int main (){
	int num,con=1,aux=1,rs=0,c=0;
	while(c<1){
	 printf("ingrese un numero mayor a 5 y menor a 15 \n");
	 scanf("%d",&num);
	
	
		if(num>5 & num<15){
		printf("secuencia fibonnaci hasta %d \n",num);
	   while (con<=num/2){
	   		
			rs=rs+aux;
			aux=aux+rs;
								
			printf("%d \n",rs);
			printf("%d \n",aux);
		 
			con++;
	    }
	       if(num%2==1){		    
		    aux=aux+rs;
		    printf("%d \n",aux);
			}
	    c=1;
		}else{
		printf("ingrese un numero correcto \n");		
		}
    }
	return 0;
}
