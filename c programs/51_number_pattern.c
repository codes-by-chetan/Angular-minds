#include<stdio.h>

int main(){
	int i,j,k,n;
	
	printf("Enter number of rows : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		k=(i%2==0)?k+i-1:(i==1)?i:k+i;
		for(j=1;j<=i;j++){
			printf(" %d",k);
			k=(i%2==0)?k-1:k+1;
		};
		printf("\n");
	}
}
