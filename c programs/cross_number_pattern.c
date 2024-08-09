#include<stdio.h>

int main(){
	int i,j,rows,cols;
	
	printf("Enter number  of rows : ");
	scanf("%d",&rows);
	
	printf("Enter number of cols : ");
	scanf("%d",&cols);
	
	for (i=1;i<=rows;i++){
		for(j=1;j<=cols;j++){
			if(j==i || j==cols-i+1){
				printf("1");
			}else{
				printf("0");
			};
		};
		printf("\n");
	};
}
