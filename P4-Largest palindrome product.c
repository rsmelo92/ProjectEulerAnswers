/*
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.
*/
#include <stdio.h>

int main(){
	
	int i,j,k=5,h,z,num,nArray[5],count=0,mult,maior=0;
	
	for(i=100;i<=999;i++){
		for(j=100;j<=999;j++){
			mult=i*j;
			num=mult;
			
			for (z=0;z<6;z++) {
				nArray[z] = num%10;
  				num = num/10;
				  }
				  
			for(h=0;h<3;h++){
				if(nArray[h]==nArray[k]){
					count++;
					k--;
					if(count==3){
						if(mult>maior){
						maior=mult;	
					}}
		}
		else{
			count=0;
			k=5;
			h=3;
		}
		}
	}
	
}

	printf("Maior: %d",maior);
	return 0;
}
