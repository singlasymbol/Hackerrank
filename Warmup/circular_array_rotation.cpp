#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
   long long int i,j,k,l,n,m,q,arr[100000],arr2[100000];
    cin>>n>>k>>q;
    
    
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   
    for(i=0;i<n;i++)
    {
     
        j = i + k;
        
        while(j >= n)
        {
          j = j - n;
        }
     
    //    cout << "j " << j; 
     arr2[j]=arr[i];
    }
   /*
    for(i=0;i<n;i++)
    {
        cout<<arr2[i]<<" ";
    }
    */
    while(q--)
    {
      cin>>m;  
        cout<<arr2[m]<<endl;
        
    }
   
    return 0;
}
