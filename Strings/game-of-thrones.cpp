#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
   
    string s;
    cin>>s;
     
   long long int len = s.length();
    
    long long int i, j, k,sum =0 ;
    bool flag = true;
    long long int arr[26] = {0};
    
    
    for( i =0; i < 26; i++)
    {
        arr[i] = 0;
    }
    for( i =0; i < len; i++)
    {
        j = s[i] - 'a';
        arr[j]++;    
    }
    
    if(len %2 ==0)
    {
        for(i = 0 ;i < 26;i++)
        {
            if(arr[i] %2 !=0)
            {   
                cout<<"NO"<<endl;
                flag = false;
                break;
            }
        }
        if(flag)
            cout<<"YES"<<endl;
    }
    
    else
    {
        for(i =0 ; i < 26;i++)
        {
            if(arr[i] % 2 !=0)
            {
                sum++;    
            }
        }
        if(sum > 1)
            cout << "NO" <<endl;
        else 
            cout <<"YES"<<endl;
    }
 
    return 0;
}
