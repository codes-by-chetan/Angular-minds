#include <stdio.h>

int main(){
	int i=1,n;
	
	printf("Enter a number to print its multiplication table : ");
	scanf("%d",&n);
	
	printf("MUltiplication table of %d : \n",n);
	
	while (i<=10){
		printf("%d\n",i*n);
		i+=1;
	};
}
