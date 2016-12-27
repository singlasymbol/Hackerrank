#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int i,j,k,l,n,t;
    float z,y,x,even=0,odd=0,zero=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
        {
        scanf("%d",&arr[i]);
    }
    
    for(i=0;i<n;i++)
        
        {
        if(arr[i]>0)
            {
            even++;
        }
        if(arr[i]<0)
            {
            odd++;
        }
        if(arr[i]==0)
       {
            zero++;
        }     
       
    }
    x=even/n;
    y=odd/n;
    z=zero/n;
    
    printf("%3f\n",x);
    printf("%3f\n",y);
    printf("%3f\n",z);
    return 0;
}
