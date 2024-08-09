#include <stdio.h>

int main() {
	int i,j,n;
	
	printf("Enter number of rows : ");
	scanf("%d",&n);
	
	for (i=1;i<n*2;i++){
		for (j=1;j<=n;j++){
			if(i==1  || i==n || i==n*2-1){
				if (j==1 || j==n){
					printf(" ");
				} else {
					printf("*");
				};
			}
			else
			{
				if (j==1 || j==n){
					printf("*");
				} else {
					printf(" ");
				};
			};
		};
		printf("\n");
	};
}
