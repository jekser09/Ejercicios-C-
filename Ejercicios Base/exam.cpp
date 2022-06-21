#include<stdio.h>
int main(){
	int k=7;
	int v[]={2,3,4,5,6,7,8,9};
	while(k>0){
		v[k]=v[k-1];
		printf("%d\n",v[k]);
		k--;
		
	}
}

