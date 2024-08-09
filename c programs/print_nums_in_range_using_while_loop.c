#include <stdio.h>
int main(){
	int i,start,end;
	
	printf("enter starting of the range : ");
	scanf("%d",&start);
	printf("Enter ending of the range : ");
	scanf("%d",&end);
	
	printf("Numbers from %d to %d : \n",start,end);
	i=start;
	while(i<=end){
		printf("%d\n",i);
		i++;
	};
}
