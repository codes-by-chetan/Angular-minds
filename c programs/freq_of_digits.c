#include <stdio.h>

int main(){
	int i,j,n,freq;
	
	printf("Enter a number : ");
	scanf("%d",&n);
	
	for (i=0;i<10;i++){
		freq=0;
		j=n;
		while (j>0){
			if (i== (j%10)){
				freq++;
			};
			j/=10;
		};
		
		if (freq==0){
			continue;
		};
		printf("Frequency of %d : %d\n",i,freq);
	};
	
}
