#include<stdio.h>

int main(){
	int i=0,j,n,k=1,c=0,d=0;
	
	printf("Enter a number : ");
	scanf("%d",&n);
	
	while (i<=n*2){
		for (j=1;j<=n*2-1;j++){
			if(c<n){
				if(j>i && j<k+n-(i/2)){
					//printf("%d",j);
					printf("*");
				}else{
					//printf("*");
					printf(" ");
				};
			}else{
				if(j>i-d && j<=i+1){
					//printf("%d",j);
					printf("*");
				}else{
					//printf("*");
					printf(" ");
				};
				
			}
		};
		//printf("\ni=%d k=%d c=%d d=%d",i,k,c,d);
		printf("\n");
		k+=2;        
		                                                                                    
		
		if (c>n-2){
			i-=1;
			d+=1;
		}else{
			i+=2;
		};
		c++;
		
		if(c==n*2-1){
			break;
		};
	};
}
