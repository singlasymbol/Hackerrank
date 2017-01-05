#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i,j,k,l,n;
    scanf("%d",&n);


    for(i=0;i<n;i++)
        {
        for(j=0;j<n;j++)
            {
            if(j<n-i-1)
            printf(" ");

            if(j>=n-i-1)
            printf("#");
        }
        printf("\n");
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
