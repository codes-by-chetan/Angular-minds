#include<stdio.h>
#include<stdarg.h>
#include<limits.h>

int min (int n,...);
int max (int n,...);

int main(){

	int maximum_num,minimum_num;
	
	maximum_num=max(4,25,100,64,41);
	minimum_num=min(3,2,58,3);
	
	printf("Maximum Number : %d\n",maximum_num);
	printf("minimum NUmber : %d\n",minimum_num);
	
}

int min(int n,...){
	int min_num=INT_MAX, i,curr;
	va_list valist;
	
	va_start(valist,n);
	
	for(i=0;i<n;i++) {
		curr= va_arg(valist, int);
		if(curr<min_num){
			min_num=curr;
		};
	};
	va_end(valist);
	return min_num;
	
}

int max(int n,...) {
	int max_num=INT_MIN,i,curr;
	va_list valist;
	va_start(valist,n);
	
	for(i=0;i<n;i++){
		curr= va_arg(valist,int);
		if(curr>max_num){
			max_num=curr;
		};
	};
	va_end(valist);
	return max_num;
}
