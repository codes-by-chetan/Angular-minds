#include <stdio.h>

int main(){
	
	int i,rev=0,n;
	
	printf("Enter a number : ");
	scanf("%d",&n);
	
	i=n;
	
	while (i>0){
		rev= (rev*10)+(i%10);
		i/=10;
	};
	
	if (n==rev)
	{
		printf("%d is pallindrome\n",n);
	}
	else
	{
		printf("%d is not a pallindrome\n",n);
	};
}
