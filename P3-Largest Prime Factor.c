/*
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
*/
#include<stdio.h>

void prime(unsigned long long pr){
	unsigned long long i, maior=0,f,aux=1;
	for(i=2;i<pr;i++){
		f=pr%i; 
		if(f==0){
			aux=i*aux;
			if(maior<i){
				maior=i;
			}
			if(aux>=pr){
				break;
			}
		}
	}
	printf("Maior=%lu",maior);
}

int main(){
	unsigned long long pr=600851475143;
	prime(pr);
	
	return(0);
}
