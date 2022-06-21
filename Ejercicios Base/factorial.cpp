#include<stdio.h>
#include<iostream>
int main (){
	int num,con=1,ayu=2,rs=1;
	printf("ingrese un numero de 2 digitos \n");
	scanf("%d",&num);
	if(num>=10 & num<=99){
	
	   while (con<num){		
			rs=rs*ayu;
			ayu=ayu+1;			
			printf("-(%d)-",con);
			printf("%d! = ",num);
			printf("%d \n",rs);
			con++;
	    }
	}else{
		printf("solo numeros de 2 digitos");
	}
	return 0;
}
