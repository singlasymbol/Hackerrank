#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
   long long int i,j,k,l,n;
    char str[10000],str1[1000];
    gets(str);
    n=strlen(str);
    for(i=0;i<n;i++)
        {
        for(j=i+1;j<n;j++)
            {
            if(str[i]==str[j] || str[i]==str[j]-32 || str[i]==str[j]+32)
                     {
                     str[j]='*';
                 }
            
    }
    }
    
    
    for(i=0;i<n;i++)
        {
          if(str[i]==32)
              {
              str[i]='*';
          }
    }
    
   //puts(str);
   i=0;
    j=0;
    
    for(l=0;l<n;l++)
        {
    if(str[l]!='*')
       {
        str1[j]=str[l];
     j++;   
    }
    }
    str1[j]='\0';
    //puts(str1);
  // printf("%lld",j);
    if(j==26)
        {
        printf("pangram");
    }
    else
        printf("not pangram");
        
        

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
