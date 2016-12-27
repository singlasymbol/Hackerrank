#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
   int i,j,k,l,n,sum1=0,sum2=0;
    
    scanf("%d",&n);
    int arr[n][n];
    for(i=0;i<n;i++)
        {
        for(j=0;j<n;j++)
            {
            scanf("%d",&arr[i][j]);
            
        }
    }
    
    for(i=0;i<n;i++)
        {
        for(j=0;j<n;j++)
            {
            if(i==j)
                {
                sum1=sum1+arr[i][j];
            }
            if(j==n-i-1)
                {
                sum2=sum2+arr[i][j];
            }
            //sum1=sum1+arr[i][i];
            //sum2=sum2+arr[i][n-i];
        }
    }
      //  printf("%d\n",sum1);
    //printf("%d\n",sum2);

    
    l=abs(sum1-sum2);
    printf("%d",l);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
