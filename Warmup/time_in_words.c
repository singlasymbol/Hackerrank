#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int i,j,k,x,y,l;
    char str[20];
    
    gets(str);
    x=str[1]-48;
    y=x+12;
    l=y%10;
  //printf("%d\n",x);
    //printf("%d\n",y);
      //intf("%d\n",l);
    
   if(str[8]=='P' && str[1]!=48+2 && str[0]!=48+1)
      {
      str[0]=1+48;
      str[1]=l+48;
   }
       if(str[8]=='P' && str[1]==48+2 && str[0]==48)
      {
      str[0]=1+48;
      str[1]=l+48;
   }
      if(str[8]=='P' && str[1]==48+1 && str[0]==48+1)
      {
      str[0]=2+48;
      str[1]=l+48;
   }
      if(str[8]=='A' && str[1]==2+48)
      {
      str[0]=48;
      str[1]=48;
   }
   for(i=0;i<8;i++)
       {
       printf("%c",str[i]);
   }
    // puts(str);
    return 0;
}
