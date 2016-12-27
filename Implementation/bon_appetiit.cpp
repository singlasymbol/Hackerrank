#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    long long int i, j, k,l,avg,sum = 0,sum1 = 0,mean,act,charged,t,n;
    int arr[100000];
    cin >> n;
    cin >> k;
    i =0;
  
    
    for(i =0 ;i < n; i++)
    {
        cin >> l;
        arr[i]= l;
        sum = sum + l;
        if(i != k)
            sum1 = sum1 + l;
    }
    
    cin >> charged;
    sum1 = sum1/2;
    if(charged - sum1 == 0)
        cout<<"Bon Appetit";
    else
    cout<<charged - sum1; 
    return 0;
}
