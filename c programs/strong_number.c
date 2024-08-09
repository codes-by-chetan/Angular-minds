#include<stdio.h>

int main(){
	int i,j,strong=0,fact,n,digit;
	
	printf("Enter a number : ");
	scanf("%d",&n);
	
	i=n;
	while (i>0){
		digit=i%10;
		fact=1;
		for (j=1;j<=digit;j++){
			fact*=j;
		};
		
		strong+=fact;
		i/=10;
		
	};
	
	if (n==strong){
		printf("%d is a strong number\n",n);
	} else {
		printf("%d is not a strong number\n",n);
	};
}
