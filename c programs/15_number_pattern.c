#include <stdio.h>
int main(){
	int i,j,rows,cols,cnt;
	
	printf("Enter number of rows : ");
	scanf("%d",&rows);
	
	printf("Enter number of columns : ");
	scanf("%d",&cols);
	
	for (i=1;i<=rows;i++){
		cnt=0;
		for(j=i; j<cols+i; j++){
			if (j>rows){
				printf("%d",rows);
			} else {
				printf("%d",j);
			};
		};
		printf("\n");
	};
	
	
}
