#include <stdio.h>

int main(){
	int i,j,n;
	
	printf("Enter number of rows : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		for (j=n-i;j>0;j--){
			printf(" ");
		};
		
		for (j=1;j<=n;j++){
			//printf("*");
			if(i==n||j==n||i==1||j==1){
				printf("*");
			} else {
				printf(" ");
			};
		};
		printf("\n");
	};
}
