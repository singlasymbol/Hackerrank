#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
        int i, j, k,n;
    
        cin >> n;
        int max = 0;  
        int arr[101] = {0};
    
        for(i =0 ;i < n ; i++)
        {
            cin >> k; 
            arr[k]++;
        }
        
    
        for(i =0 ;i < 101 ; i++)
        {
            if(max < arr[i])
            {
                max = arr[i];    
            }
        }
        
    cout<< n - max; 
    return 0;
}
