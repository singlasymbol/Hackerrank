#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int smallest(int *arr,int n)
    {
    int i,small=99999;
 /*   for(i=0;i<n;i++)
        {
        if(arr[i]!=0)
            {
            small=arr[i];
            break;
        }
    }*/
    for(i=0;i<n;i++)
        {
        if(small>arr[i] && arr[i]!=0)
            {
            small=arr[i];
        }
    }
    //cout<<small;
    return small;
  }

void diff(int *arr,int n,int l)
{
    int i,j=0,k;
    for(i=0;i<n;i++)
        {
        if(arr[i]>0)
            {
        arr[i]=arr[i]-l;
            j++;
        }
}
    cout<<j<<"\n";
   /* for(i=0;i<n;i++)
        {
        cout<<arr[i]<<"\t";
    }
    cout<<"\n";*/
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++)
    {
       cin >> arr[arr_i];
    }
    
    int i,j,k,l,small=arr[0],big=0,y=arr[0];
       for(i=1;i<n;i++)
           {
               if(y<arr[i])
               {
                //   big=arr[i];
                   y=arr[i];
                   big=i;
                 //  cout<<"big is"<<big;
                 }
            }
    //cout<<"the bigg el is"<<big<<"\n";
    
    
    //cout<<"big is"<<y<<"\n";
    while(arr[big]!=0)
      {
      //  cout<<"big is"<<y<<"\n";
        l=smallest(&arr[0],n);
      // cout<<" l is"<<l<<"\n";
        diff(&arr[0],n,l);
    }
    return 0;
}
