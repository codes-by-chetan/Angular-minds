#include <stdio.h>

int main(){
	char i,start,end;
	
	printf("Enter starting character : ");
	scanf(" %c",&start);

	printf("Enter ending character : ");
	scanf(" %c",&end);
	
	printf("Characters in range %c and %c : \n",start,end);
	
	for (i=start;i<=end;i++){
		printf("%c\n",i);
	};
	
}
