#include<stdio.h>

int main(){
	int f0=0,f1=1,fn,n,i;
	
	printf("Enter a number : ");
	scanf("%d",&n);
	
	printf("first %d terms of fibonacci series : \n",n);
	for(i=1;i<=n;i++){
		switch(i){
			case 1 :
				printf("%d\n",f0);
				break;
			case 2 :
				printf("%d\n",f1);
				break;
			default :
				fn=f0+f1;
				printf("%d\n",fn);
				f0=f1;
				f1=fn;
		};
	};
}
