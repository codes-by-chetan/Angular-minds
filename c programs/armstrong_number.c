#include<stdio.h>
#include<math.h>

int main(){
	int i,digit_count=0,n,arm=0;
	
	printf("Enter a number : ");
	scanf("%d",&n);
	
	i=n;
	while(i>0){
		digit_count++;
		i/=10;
	};
	
	i=n;
	while(i>0){
		arm+=pow((i%10),digit_count);
		i/=10;
	};
	
	if (n==arm){
		printf("%d is an armstrong number\n",n);
	} else {
		printf("%d is not an armstrong number\n",n);
	};
}
