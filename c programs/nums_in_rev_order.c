#include <stdio.h>
int main(){
	int i,start,end;
	
	printf("Enter the starting of range : ");
	scanf("%d",&start);
	printf("Enter the ending of range : ");
	scanf("%d",&end);
	
	printf("numbers from %d to %d : \n",start,end);
	
	for (i=start;i>=end;i--){
		printf("%d\n",i);
	};
}

