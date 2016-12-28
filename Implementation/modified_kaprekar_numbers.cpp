#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
  long long  int i,x,y,count=0,j,k,l,n,q,p,w,g=0;
    cin>>x>>y;
  //  cin>>i;
    for(i=x;i<=y;i++)
       {
        count=0;
        long long int m,sum=0;
        k=pow(i,2);
        //cout<<"k is"<<k<<"\n";
        l=k;
        m=i;
        while(k!=0)
            {    
            count++;
            k=k/10;
        }
    if(count%2==1)
        {
        count++;
    }
       // cout<<"count is"<<count<<"\n";
     //cout<<""
       // if(count%2!=1 || i==1)
            {
        w=pow(10,count/2);
        
        q=(l%w);
        l=l/w;
          //  cout<<"w is"<<w<<"\n";
    //cout<<"q is "<<q<<"\n";
    //cout<<"l is"<<l<<"\n";
        sum=q+l;
       // cout<<"sum is "<<sum<<"\n";
        if(m==sum)
            {
            cout<<i<<" ";
             g++;   
        }
    }
    
    }
    if(g==0)
        cout<<"INVALID RANGE";
    
    return 0;
}
