#include <stdio.h>

int main(){
	int a,b,i,power=1;
	
	printf("Enter base : ");
	scanf("%d",&a);
	printf("Enter Exponent : ");
	scanf("%d",&b);
	
	for(i=1;i<=b;i++){
		power*=a;
	};
	
	printf("%d ^ %d : %d\n",a,b,power);
}
