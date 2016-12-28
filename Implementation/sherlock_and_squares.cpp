#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int  n,t,a,b;
    
    cin>>n;
    
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        
        int x,y;
        x=sqrt(a-1);
        y=sqrt(b);
        
        cout<<abs(x-y)<<"\n";
    }
    return 0;
}
