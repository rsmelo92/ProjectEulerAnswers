/*
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?
*/

#include<stdio.h>

int main(){
	
	long long i,j,prim=1, rest=0, count=0;
	
	for(i=2;i<=1000000000;i++){
		prim=1;
		for(j=(i-1);j>1;j--){
			rest=i%j;
		
			if(rest==0){
				prim=0;
				break;
			}
		}
		if(prim==1){
		count++;
		if(count==10001){
			break;
		}
		}
	}
	
	printf("Answer = %ld",i);
	return 0;
}
