#include <iostream>
using namespace std;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int i,j,k,t,l,n,arr[1000];
    
    cin>>t;
    
    while(t--)
    {
        int n,p,w,count=0;
        cin>>n>>p>>w;
        
        k=n/p;
        count=count+k;
         
        if(w<k || w==k)
         {
             while(k>w || k==w)
             {
                 l=k/w;
                 k=k%w+l;
                   count=count+l;                             
             }
             
         }
        
        cout<<count<<endl;
    }
    return 0;
}