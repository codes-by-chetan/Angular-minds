#include<stdio.h>

int main(){
	int i,j,n,k=1,a=1;
	
	printf("ENter number of rows : ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			printf(" %d",k);
			k+=a++;
		};
		printf("\n");
	};
}
