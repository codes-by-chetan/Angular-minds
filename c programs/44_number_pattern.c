#include<stdio.h>
int main(){
	int i,j,k,rows,cols,flag;
	
	printf("enter number of rows : ");
	scanf("%d",&rows);
	
	printf("Enter number of cols : ");
	scanf("%d",&cols);
	
	for (i=1;i<=rows;i++){
		k=(i==1)? i:i+1;
		flag=1;
		for(j=1;j<=((i==1)? i:(i-1)*2);j++){
			printf("%d",k);
			if (k>=i*2-1 || flag==0){
				k--;
				flag=0;
			}else{
				k++;
			};
		};
		printf("\n");
	};
}
