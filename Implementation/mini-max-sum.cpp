#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    vector<long long int> arr;
    long long int i, j, k,x;
    long long int sum =0 ,min = 0;
    for( i =0; i < 5;i++)
    {
        cin >> x;
        arr.push_back(x);
    }
    sort(arr.begin(),arr.end());
    
        cout<< arr[0] + arr[1] +arr[2] +arr[3] << " ";
        cout<< arr[1] + arr[2] +arr[3] +arr[4];
    
    return 0;
}
