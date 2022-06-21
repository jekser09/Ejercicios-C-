#include <stdio.h>
#include <iostream>
using namespace std;
int main (){
	int num,di=0,c=0,nm=0,inver=0;
	
	printf("ingrese un numero de 5 digitos porfavor \n");
	scanf("%d",&num);
	if(num>=10000 && num<=99999){
	
		
	
    	while (num!=0){  	
		    di=di+num%10;
		    inver=inver*10+num%10;
		    num=num/10;		    
			if(num>=100 && num<=999){
				nm=num%10;
			}		
    	}
    
    	printf("la suma de los digitos es: %d \t \n",di);
    	printf("el digito de la mitad es: %d \t \n",nm);
    	printf("el numero invertido es: %d \t \n",inver);
    }else{
    	printf("solo numeros de 5 digitos");
	}

	return 0;
}
