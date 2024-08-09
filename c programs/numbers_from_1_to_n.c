#include <stdio.h>
int main(){
    int i,n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("Number from 1 to %d : \n",n);
    for (i=1;i<=n;i++){
        printf("%d\n",i);
    };
}
