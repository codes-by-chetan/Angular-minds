#include <stdio.h>

int main(){
	int i=1,num1,num2,lcm;
	
	printf("Enter first number : ");
	scanf("%d",&num1);
	printf("Enter second number : ");
	scanf("%d",&num2);
	
	int max= num1>num2 ? num1:num2;
	
	while (1){
		if ((i*max)%num1==0 && (i*max)%num2==0){
			lcm= i*max;
			break;
		};
		i++;
	};
	
	printf("LCM of %d and %d : %d\n",num1,num2,lcm);
	
}
