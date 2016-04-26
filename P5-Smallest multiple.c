/*
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/
#include<stdio.h>

int main(){
	long i, div,a=2520,cont=0,out=0,aux=0;
	
	do{
	if(a%2520==0){
		for(i=20;i>=11;i--){
			div=a%i;
			
			if(div==0){
				cont++;
			}
			else{
			break;
			}
		}
		if(cont==10){
		out=1;
		}
		else{
		i=11;
		a++;
		cont=0;
		}}
	else{
	a++;
	}
	}while(out==0);
	printf("Smallest: %d",a);
	return 0;
}
