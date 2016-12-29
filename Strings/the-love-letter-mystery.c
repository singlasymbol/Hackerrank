#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
        int i,j,k,l;
        int n;
    char str[100][10000];
        scanf("%d",&n);
 //printf("%d",n);
    
    for(i=0;i<n;i++)
        {
    scanf("%s",str[i]);
    }
  
    
  
    
    for(i=0;i<n;i++)
        {
        int c=0;
        l=strlen(str[i]);
        
        if(l==1)
            {
            printf("0\n");
        printf("ds");
        }
        
        else
            {
                    //    printf("l is %d",l);

            k=l/2;
            //printf("k is %d",k);
            for(j=0;j<k;j++)
                {
            //    printf("%c\n",str[i][j]);
              ///  printf("%c\n",str[i][l-j-1]);
                
                if(str[i][j]!=str[i][l-j-1])
                    {
                    c=c+abs(str[i][j]-str[i][l-j-1]);
                }
            }
            printf("%d\n",c);
        }
        
    }
    return 0;
}
    
