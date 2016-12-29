#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int i, j, k,sum = 0;
    string s;
    cin >>s;
    int len = s.length();   
    int arr[26] = {0};
    
    for(i =0; i < len;i++)
    {
        j = s[i] - 'a';
        arr[j]++;    
    }
    
    int max = -1,min = 32767;
   /* 
    for(i =0; i < 26;i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];    
        }
        if(arr[i] < min)
        {
            min = arr[i];    
        }
    }
    
    for(i = 0; i < 26;i++)
    {
        cout << arr[i]<<" ";
    }
    cout<<endl;
    */
        for(i = 0; i < 26;i++)
    {
          if(arr[i] != 0)
          {
            k = arr[i];
              break;
          }
    }
    int count= 0;
  //  cout <<" "<< k<<endl;
    for(i =0; i < 26;i++)
    {
        if(k != arr[i] && arr[i] != 0)
        {
            count++;    
        }
    }
    
    if(count > 1)
    {
            cout <<"NO"<<endl;
    }
    else
        cout << "YES"<<endl;
  /*  int l = max - 
  min + 1;
    int a[l]= {0};
    
    for(i =0;i < 26;i++)
    {
        a[arr[i] - min]++;    
    }
    
    for(i =0;i < l;i++)
    {
        
    }*/
    return 0;
    
}
