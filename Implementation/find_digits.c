#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i,j,n,l,count=0,x;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    scanf("%d",&n);
    int k,y;
    for(j=0;j<n;j++)
        {
        count=0;
        scanf("%d",&k);
        l=k;
        while(l!=0)
            {
            y=l%10;
            if(y!=0)
            {
            if(k%y==0)
                {
                count++;
            }
            }
            l=l/10;
        }
        printf("%d\n",count);
    }
    return 0;
}
