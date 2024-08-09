#include <stdio.h>

int main(){
	
	int i,j,n,c=0;
	printf("Enter number of rows : ");
	scanf("%d",&n);
	
	for(i=n/2;i<=n;i+=2){
		for(j=1;j<n*2;j++){
			if(i<n-1){
				if(j>n/i && j<=i+2-c){
					printf("*");
				} else if(j>n/i+n && j<=i+2+n-c){
					printf("*");
				}else {
					printf(" ");
				};
			}else{
				if(j==n){
					printf(" ");
				}else{
					printf("*");
				};
			};
		};
		printf("\n");
		c++;
	};
	
	for(i=1; i<=n; i++) {
		for (j=1; j<n*2; j++){
			if (j>=i && j<=n*2-i){
				printf("*");
			} else {
				printf(" ");
			};
		};
		printf("\n");
	};

}
