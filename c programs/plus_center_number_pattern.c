#include<stdio.h>

int main(){
	int i,j,rows,cols;
	
	printf("Enter number of rows : ");
	scanf("%d",&rows);
	
	printf("Enter number of cols : ");
	scanf("%d",&cols);
	int midrow = (rows+1)/2;
	int midcol = (cols+1)/2;
	
	for (i=1;i<=rows;i++){
		for(j=1;j<=cols;j++){
			if (i==midrow || j==midcol){
				printf("0");
			} else if (cols%2==0 && j==midcol+1){
				printf("0");
			} else if (rows%2==0 && i==midrow+1){
				printf("0");
			} else{
				printf("1");
			};
		};
		printf("\n");
	};
}
