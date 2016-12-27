#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    long long int n , j = 0, i, k ,arr[1000]={0},count =0;
    
    cin >> k;
    
    for( i=0; i < k;i++)
    {
        cin >> n;
        arr[n]++;
    }
    /*
    for(i =0; i < j; i++)
    {
        cout<<arr[i]<<" ";
    }
    */
    for(i = 0; i < 1000; i++)
    {
        if(arr[i] > 0)
        {
            count = count + arr[i]/2;    
        }
    }
    cout<<count;
    return 0;
}
