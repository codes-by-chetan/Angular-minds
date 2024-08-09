#include<stdio.h>

int main(){
	int i,n,dSum=0;
	
	printf("Enter a number : ");
	scanf("%d",&n);
	
	for (i=1;i<=n/2;i++){
		if (n%i==0){
			dSum+=i;
		};
	};
	
	if (dSum==n){
		printf("%d is a perfect number\n",n);
	} else {
		printf("%d is not a perfect number\n",n);
	};
}
