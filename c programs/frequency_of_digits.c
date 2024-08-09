#include <stdio.h>

int main(){
	int i,j,n,count,digit;
	
	printf("Enter a number : ");
	scanf("%d",&n);
	
	
	
	while (i>0){
		digit=i%10;
		count=0;
		j=n;
		while (j>0){
			if (digit == (j%10)){
				count++;
			};
			j/=10;
		};
		
		printf("frequency of %d : %d\n",digit,count);
		i/=10;
	};
	
}
