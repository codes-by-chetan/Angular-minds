#include <stdio.h>

int main(){
	int i, n, sum_even=0,sum_odd=0;
	
	printf("Enter the end of series : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		if(i%2==0){
			sum_even+=i;
		}else{
			sum_odd+=i;
		};
	};
	
	printf("Sum of first %d Even numbers : %d\n",n,sum_even);
	printf("Sum of first %d odd numbers : %d\n",n,sum_odd);
}
