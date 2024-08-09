#include <stdio.h>
#include <math.h>

int main(){
	int i,rev=0,count,n,digit;
	
	printf("Enter a Number : ");
	scanf("%d",&n);
	count=log10(n);
	i=n;
	
	while (i>0){
		digit=i%10;
		//rev+= digit*pow(10,count);
		//count--;
		rev= (rev*10)+digit;
		i/=10;
	};
	
	printf("reverse number : %d \n",rev);
}
