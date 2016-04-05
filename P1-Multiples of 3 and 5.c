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
