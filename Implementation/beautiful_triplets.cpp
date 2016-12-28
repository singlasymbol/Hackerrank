#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long int i, j ,k, count=0, d, t, n;
    
   cin >> n >> d;
    
    long long int arr[n], a[n];
    
    for( i = 0; i < n; i++)
    {
        cin >> arr[i];    
    }
    
    int s1 = 0,s2 = 0;
  
    for( i = 0; i < n;i++)
    {
        s1 = arr[i] + d;
        for( j = i + 1; j < n; j++)
        {
                if( arr[j] == s1)
                {
                     s2 = s1 +d;
                 
                    for( k = j + 1; k < n; k++)
                    {
                        if( arr[k] == s2)
                        {
                            count++;
                            break;
                        }
                    }
                    
                }
        }
    }
    
    cout << count;
    return 0;
}
