#include <stdio.h>

int main(){
	int i,n,sum=0;
	
	printf("Enter a number : ");
	scanf("%d",&n);
	
	i=n;
	
	while (i>0){
		sum+=(i%10);
		i/=10;
	};
	
	printf("Sum of digits of %d : %d\n",n,sum);
}
