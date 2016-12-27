#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
     int i, j, k, hieght ,area,arr[26];
        
    for(i =0; i < 26; i++)
        cin >> arr[i];
    
    string str;
    cin >> str;
   int max = 0;
    for(i =0;i <str.length(); i++)
    {
       k =str[i] - 97;
       // cout << k;
        
        if(max < arr[k])
        {
            max = arr[k];    
        }
    }
    
  cout<< max * str.length();
    return 0;
}
