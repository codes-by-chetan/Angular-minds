#include <stdio.h>

int main(){
	int i,start,end;
	
	printf("Enter the starting of the range : ");
	scanf("%d",&start);
	printf("Enter the ending of the range : ");
	scanf("%d",&end);
	
	printf("Numbers in the range %d to %d : \n",start,end);
	
	for (i=start;i<=end;i++){
		printf("%d\n",i);
	};
}
