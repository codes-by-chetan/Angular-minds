#include<stdio.h>

int main(){
	int i,j,n;
	
	printf("Enter number of rows : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		for(j=(i%2==0)?2:1; j<=i*2;j+=2){
			printf("%d",j);
		};
		printf("\n");
	};
	
}
