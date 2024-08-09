#include<stdio.h>

int main(){
	int i,n,fDigit,lDigit,count=0,cDigit;
	printf("Enter a number : ");
	scanf("%d",&n);
	
	i=n;
	
	while (i>0){
		count+=1;
		cDigit=i%10;
		if (count==1){
			lDigit=cDigit;
		};
		i/=10;
	};
	
	fDigit=cDigit;
	
	printf("First Digit : %d\n",fDigit);
	printf("Last Digit : %d\n",lDigit);
}
