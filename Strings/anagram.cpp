#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<cstring>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int i, j, n, t;
    string s;
    
    cin >> t;
    
    while(t--)
    {
        cin >> s;
         
        int len = s.length();
        
        if(len % 2 != 0)
            cout << "-1" << endl;
        else
        {
             int half = len/2;
         //   cout<<"asd";
             int arr[26]= {0},ar[26] = {0};
        
             for(i =0 ;i < half;i++)
             {
                 j = s[i] - 'a';
                 arr[j]++;
             }
        
             for(i =half ;i < len;i++)
             {
                 j = s[i] - 'a';
                 ar[j]++;
             }
        
             int sum = 0;
             for(i =0 ;i < 26;i++)
             {
                //cout <<arr[i] <<" ";
                 sum = sum + abs(arr[i] - ar[i]);   
              }
        
             cout <<sum/2<<endl;
         }
    }
        return 0;
}
