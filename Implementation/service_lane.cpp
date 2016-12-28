#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n,l;
    int t,min;
    cin >> n >> t;
    vector<int> width(n);
    for(int width_i = 0;width_i < n;width_i++){
       cin >> width[width_i];
    }
    for(int a0 = 0; a0 < t; a0++)
    
    {
        int i;
        int j;

        //cout<<width[i]<<"\n";
        
        cin >> i >> j;
                //cout<<i<<"\n";
         min=width[i+1];
        for(l=i;l<=j;l++)
         {
          if(min>width[l])
          {
          min=width[l];
      }
    }
            
        cout<<min<<endl;
    }
    
    
    return 0;
}
