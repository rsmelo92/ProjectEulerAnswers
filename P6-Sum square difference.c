/*
The sum of the squares of the first ten natural numbers is 385.

The square of the sum of the first ten natural numbers is 3025.

Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 - 385 = 2640.

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
*/

#include<stdio.h>

int main (){
	long sum=0,sum2=0,sqr=0,i;
	
	for(i=1;i<=100;i++){
		sum=i+sum;
		sqr=i*i;
		sum2=sqr+sum2;
	}
	sum=sum*sum;
	sum=sum-sum2;
	printf("%d",sum);
	return sum;
}
