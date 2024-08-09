#include<stdio.h>

int main() {
	int i,j,n;
	
	printf("Enter number of rows : ");
	scanf("%d",&n);
	
	for(i=1;i<n*2;i++){
		for(j=1;j<n*2;j++){
			if(i==n || j==n){
				printf(" +");
			} else {
				printf("  ");
			};
		};
		printf("\n");
	};
}
