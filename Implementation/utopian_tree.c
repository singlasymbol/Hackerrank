#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int i,j,k,l,n,t,d;
    int x=1;
    scanf("%d",&n);
  for(j=0;j<n;j++)
      {
      scanf("%d",&d);
      for(i=0;i<d;i++)
          {
          if(i%2==0)
              {
              x=x*2;
          }
          if(i%2==1)
              {
              x=x+1;
          }
      }
      printf("%d\n",x);
      x=1;
  }
    
    return 0;
}
