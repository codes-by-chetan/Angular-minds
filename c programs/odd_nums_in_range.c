#include <stdio.h>

int main(){
	int i, start, end;
	
	printf("Enter the starting of the range : ");
	scanf("%d",&start);
	printf("Enter the ending of the range : ");
	scanf("%d",&end);
	
	printf("odd numbers between %d and %d : \n",start, end);
	
	for (i=start;i<=end;i++){
		if(i%2!=0){
			printf("%d\n",i);
		};
	};
}
