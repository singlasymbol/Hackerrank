#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    string s;
    cin >> s;
    
    long long int i, j, len, q, w,k, e, c, f;
    
    len = s.length();
    
    c = ceil(sqrt(len));
    
    f = floor(sqrt(len));
    
    //cout<<c<<" "<<f << endl;
 
    for(i = 0;i < c; i++)
    {
        for(j = i;j < len; j= j + c)
        {
            cout<< s[j];
        }
        cout<<" "; 
    }
    return 0;
}