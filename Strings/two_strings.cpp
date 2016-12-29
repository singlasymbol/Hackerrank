#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int i, j, k ,t;
    cin >> t;
    
    while(t--)
    {
        string s1,s2;
        
        cin >> s1 >>s2;
        int len1 = s1.length();
        int len2=  s2.length();
        
        int arr1[26] = {0};
        int arr2[26]= {0};
        
        for(i = 0; i < len1;i++)
        {
            j = s1[i] - 'a';
            arr1[j]++;
        }
        
        for(i = 0; i < len2;i++)
        {
            j = s2[i] - 'a';
            arr2[j]++;
        }
        
        bool flag = false;
        
        for(i = 0; i < 26;i++)
        {
            if(arr1[i] > 0 && arr2[i] > 0)
            {
                cout <<"YES"<<endl;
                flag = true;
                break;
            }
        }
        if(!flag )
            cout<<"NO"<<endl;
        
    }
        
    return 0;
}
