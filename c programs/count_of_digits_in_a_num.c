#include <stdio.h>

int main(){
	int i,n,count=0;
	
	printf("Enter a number : ");
	scanf("%d",&n);
	
	i=n;
	while (i>0){
		count+=1;
		i/=10;
	};
	
	printf("Number Of Digits in %d : %d\n",n,count);
}

