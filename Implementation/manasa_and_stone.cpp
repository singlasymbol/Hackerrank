#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int i,l,t;
    
    cin>>t;
    
    while(t--)
        {
        int a,b,c;
        cin>>a>>b>>c;
        
         int x,y,z,q,w;
      
        x=b*(a-1);
        y=c*(a-1);
        z=abs(c-b);
        if(y==x)
            {
            cout<<x<<endl;
        }
        else
            {
        if(y>x)
            {
            q=x;
            w=y;
        }
        else
            {
            q=y;
            w=x;
        }
        for(i=q;i<=w;i=i+z)
            {
            cout<<i<<" ";
        }
        cout<<endl;
        }
    }
    
    
    return 0;
}
