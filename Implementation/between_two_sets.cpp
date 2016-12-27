#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int gcd(int x,int y)
{
    if(x % y == 0)
        return y;
    
   return gcd(y, x % y);
}

int lcm (int x,int y)
{
    return x * y /gcd(x,y);    
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int i, j, g,l, first, second;
    
    cin >> first >> second; 
    int arr[first];
    int ar[second];
    
    for(i = 0;i < first;i++)
        cin>>arr[i];
    
    for(i = 0;i < second;i++)
        cin>>ar[i];
    
    g = ar[0];
    for(i = 1; i < second;i++)
    {
        g = gcd(g, ar[i]); 
    }
   
    l = arr[0];
    
    for(i = 1;i < first;i++)
    {
        l = lcm(l,arr[i]);
    }
   
   // cout <<" gcd " << g <<" lcm "<<l<<endl;
    int m = 1,count = 0;
   
    for(i = 1; m < g;i++)
    {
        m = l * i;
        
        if(g % m == 0)
            count++;
    }
    
    cout<<count;
    return 0;
}
