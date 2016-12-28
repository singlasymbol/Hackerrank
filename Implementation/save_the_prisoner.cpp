#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long int i,n,m,s,k,l,t;
    
    cin>>t;
    
    while(t--)
    {
        cin>>n>>m>>s;
        s=s+m-1;
     //  cout<<s<<endl;
        l=s%n;
        if(l)
        cout<<l<<endl;
        else
        cout<<n<<endl;
    }
    return 0;
}
