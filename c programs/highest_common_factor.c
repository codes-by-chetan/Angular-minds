#include <stdio.h>

int main(){
	
	int i,hcf,num1,num2;
	
	printf("Enter first number : ");
	scanf("%d",&num1);
	printf("Enter second number : ");
	scanf("%d",&num2);
	
	int min = (num1<num2) ? num1:num2;
	
	for (i=1;i<=min;i++){
		if (num1%i==0 && num2%i==0){
			hcf=i;
		};
	};
	
	printf("hcf : %d\n",hcf);
}
