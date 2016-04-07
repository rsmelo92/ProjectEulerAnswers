/*
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.
*/
#include<stdio.h>

int main(){
	
int x,y,z,i, soma2=0,soma1=0,soma;

for (i=1;i<=999;i++){
	if((i%3==0) || (i%5==0)){
		soma1=soma1+i;
	}

}
soma = soma1+soma2;
printf("Soma: %d",soma);
return (0);
}
