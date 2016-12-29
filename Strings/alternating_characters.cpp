#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<cstring>
#include<strings.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
   long long int i,j,k,l,t,n;
    cin>>t;
    char str[100000];
    while(t--)
        {
cin>>str;
     //   cout<<str;
       long long int count=0;
        k=strlen(str);
        
        for(i=0;i<k;i++)
            {
            if(str[i]==str[i+1])
                {
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
