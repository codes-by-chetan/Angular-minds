#include <stdio.h>
#include <math.h>

int main(){
	int num;
	printf("Enter a number : ");
	scanf("%d",&num);

	int lDigit = num%10;
	
	int count= (int) log10(num)+1;
	
	int fDigit= num / ((int) pow(10,count-1));

	int sNum= lDigit*(pow(10,count-1));
	
	sNum+= num%((int) pow(10,count-1));
	
	sNum-=lDigit;
	
	sNum+=fDigit;
	
	printf("Original Number : %d\n",num);
	
	printf("Number after swapping first and last digits : %d\n",sNum);
	
}
