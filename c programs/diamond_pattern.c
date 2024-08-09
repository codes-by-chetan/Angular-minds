#include <stdio.h>

int main(){
	int i,j,n,c=0,a=0;
	
	printf("Enter number of rows : ");
	scanf("%d",&n);
	
	i=1;
	
	while(1){
		for(j=1;j<n-a;j++){
			printf(" ");
		};
		for(j=1;j<=i;j++){
			printf("*");
		};
		printf("\n");
		
		
		c++;
		
		if(c>=n){
			i-=2;
			a--;
		} else{
			i+=2;
			a++;
		};
		
		if(c>n*2-1){
			break;
		};
		
	};
}
