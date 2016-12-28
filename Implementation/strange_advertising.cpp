#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int i, j,n;
    int m = 5;
    cin >> n;
    int sum = 0;
    
    sum = m / 2;
    m = (m/2 )* 3;
    
    for(i = 1; i < n;i++)
    {
        sum = sum +( m/2 );
        m = (m /2) * 3; 
    }
    cout<< sum;
    return 0;
}
