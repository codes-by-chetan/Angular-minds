#include <stdio.h>

int main(){
	int i,j,n;
	
	printf("Enter number of lines : ");
	scanf("%d",&n);
	
	for(i=1;i<n*2;i++){
		for(j=1;j<n*2;j++){
			if(j==i || j==n*2-i){
				printf("*");
			} else {
				printf(" ");
			};
		};
		printf("\n");
	};
}
