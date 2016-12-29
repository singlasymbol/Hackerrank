#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int k;
    cin >> k;
    int i,j;
    for(i=0;i<n;i++)
        {
    //i=8;
        if(s[i]>=97 && s[i]<=122) 
            {
            int q=s[i];
             q=q+k;
    //        cout<<q<<"\t";
  //          cout<<s[i]<<"\t";
        while(q>122)
            {
            q=q-26;
      //      cout<<"q is"<<q<<"\t";
        }
        //    cout<<q<<"\t";
            s[i]=q;
        }
    
         else if(s[i]>=65 && s[i]<=90)
             {
             int w=s[i];
                 w=w+k;
                while(w>90)
                     {
                     w=w-26;
                 }
             s[i]=w;
             }
    }
             
    cout<<s;
    return 0;
}
