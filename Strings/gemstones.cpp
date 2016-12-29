#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<strings.h>
#include<cstring>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int i,j,k,l,n,y,t,p,flag=100000;
    int arr[30]; 
    
    char str[200][200];
    cin>>n;
    for(i=0;i<n;i++)
        {
        cin>>str[i];
    }
    
    for(i=0;i<n;i++)
    {
        l=strlen(str[i]);
       
        for(k=0;k<l;k++)
        {
            for(y=k+1;y<l;y++)
                {
                if(str[i][k]==str[i][y] && str[i][k]!=94)
                    {
                    str[i][y]=94;
                }
            }
        }
        p=0;
        char d[200]={0};
        for(k=0;k<l;k++)
         {
                if(str[i][k]!=94)
                {
                    d[p]=str[i][k];
                    p++;
                }
            
        }
        d[p]='\0';
        l=strlen(d);
                            /* if(i==19)
                                {
         
                                    for(j=0;j<l;j++)
                                             {
                                           cout<<d[j]<<" ";
                                                }   
                                        }*/
        for(j=0;j<l;j++)
        {
            arr[int(d[j]-96)]++;
          }
    }
        int count=0;
    /*
          for(j=1;j<=26;j++)
        {
            cout<<arr[j]<<" ";
          }*/
   // cout<<endl;
          for(j=1;j<=26;j++)
        {
              if(arr[j]==n)
                  {
                  count++;
              }
        }
        
    cout<<count<<endl;
    return 0;
}
