#include <stdio.h>

int main(){
	int i,product=1,n;
	
	printf("Enter a number : ");
	scanf("%d",&n);
	
	i=n;
	
	while (i>0){
		product*=(i%10);
		i/=10;
	};
	
	printf("Product of digits of %d : %d\n",n,product);
	
}
