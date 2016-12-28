#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int check(string s1,string s2,int m)
{
    int i ,j, k, count = 0;
    
    //cout<<"s1 "<<s1<<" s2 "<<s2<<endl;
    for(i = 0 ; i < m; i++)
    {
        
        if( (s1[i] == '1' || s2[i]=='1' ))
        {
            count++;    
        }
    }
  //  cout<<count<<endl;
    return count;
}
int main(){
    int n, i, j, k, x;
    int m, max = 0;
    cin >> n >> m;
    vector<string> arr(n);
    int a[10000];
    for(int topic_i = 0;topic_i < n;topic_i++){
       cin >> arr[topic_i];
    }
    
    for( i = 0; i < n - 1;i++)
    {
        for( j = i + 1; j < n ; j++)
        {
            x = check(arr[i],arr[j],m);
          //  cout << x<<" ";
            a[x]++;
            if( x > max)
            {
                max = x;    
            }
        }
    }
    
    cout << max << endl << a[max];
    return 0;
}
