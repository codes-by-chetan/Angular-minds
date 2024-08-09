/**
 * C program to print number pattern
 */

#include <stdio.h>

int main()
{
    int n, i, j,c=1;

    /* Input rows and columns from user
     */
    printf("Enter number of rows: ");
    scanf("%d", &n);
  
    
    for(i=1; i<n*2; i++)
    {
        
        if(i>n){
            for(j=n; j>(n+i)-n*2; j--)
            {
                printf("  %d", j);
            }
            for(j=1; j<(n+i+c)-n*2; j++)
            {
            
                printf("  %d", (n+i+1)-n*2);
            
            }
            for(j=(n+i+1)-n*2; j<=n; j++)
            {
                printf("  %d", j);
            }
            c++;
        }else{
            for(j=n; j>n-i; j--)
            {
                printf("  %d", j);
            }
            for(j=1; j<=n*2-i*2-1; j++)
            {
            
                printf("  %d", (n - i + 1));
            
            }
            for(j=(i==n)?n-i+2:n-i+1; j<=n; j++)
            {
                printf("  %d", j);
            }
        };

        printf("\n");
    }

    return 0;
}

