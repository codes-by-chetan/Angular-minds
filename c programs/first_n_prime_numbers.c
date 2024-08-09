#include <stdio.h>

int main(){
	int i=1,j,count=0,n,dcount;
	
	printf("Enter a number : ");
	scanf("%d",&n);
	
	while(1){
		dcount=0;
		for (j=1;j<=i;j++){
			if (i%j==0){
				dcount++;
			};
		};
		
		if (dcount==2){
			printf("%d\n",i);
			count++;
		};
		
		if (count==n){
			break;
		};
		i++;
	};
	
}
