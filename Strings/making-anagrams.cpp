#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string s1, s2;
    
    cin >>s1;
    cin >>s2;
    
    int len1 = s1.length();
    int len2 = s2.length();
    
    int arr1[26] = {0},arr2[26]= {0};
    
    int i, j, k,sum = 0;
    
    for( i =0 ; i < len1;i++)
    {
        k = s1[i] - 'a';
        arr1[k]++;
    }
    
    for( i =0 ; i < len2;i++)
    {
        k = s2[i] - 'a';
        arr2[k]++;
    }
    
    for(i = 0; i < 26;i++)
    {
        sum = sum + abs(arr1[i] - arr2[i]);   
    }
    
    cout <<sum;
    return 0;
}
