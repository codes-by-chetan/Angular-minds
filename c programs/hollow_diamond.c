#include <stdio.h>

int main(){
	int i,j,n;
	
	printf("Enter number of rows : ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		for(j=1;j<=n*2;j++){
			if(j>n-i && j<=n+i){
				printf(" ");
			} else {
				printf("*");
			};
		};
		printf("\n");
	};
	
	for(i=n-1;i>=0;i--){
		for(j=1;j<=n*2;j++){
			if(j>n-i && j<=n+i){
				printf(" ");
			} else {
				printf("*");
			};
		};
		printf("\n");
	};
}
