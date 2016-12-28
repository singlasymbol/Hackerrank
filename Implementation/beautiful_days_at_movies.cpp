#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int reversed(int x)
{
    int rev = 0,mul;
    
    while(x)
    {
        rev = rev * 10 +  (x % 10) ;   
        x = x /10;
    }
    return rev;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
   
    long long int i, j, k, first, second,count = 0;
    
    cin >> first >>second >> k;
    
    for(i = first ; i <= second ;i++ )
    {
        //cout << reversed(i) <<" ";
        if(abs(i - reversed(i)) % k == 0)
        {
            count++;    
        }
    }
    
    cout << count << endl;
    return 0;
}
