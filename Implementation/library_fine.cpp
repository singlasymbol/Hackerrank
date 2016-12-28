#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int d1;
    int m1;
    int y1;
    cin >> d1 >> m1 >> y1;
    int d2;
    int m2;
    int y2;
    cin >> d2 >> m2 >> y2;
    int j=0,k,l;
     

    if(y1 == y2)
        {
            if(m1==m2)
            {
               if(d1>d2)
                   {
                    j=15*(d1-d2); 
                   }
            }
            else
            j=500*(m1-m2);
        
    }
    else
        j=10000;
    
    if(y1<y2)
    {
            j=0;
    }
    
    if( y1 == y2  && m1<m2)
        {
        j=0;
    }
    
    if( y1== y2 && m1==m2 && d1<d2)
        {
        j=0;
    }
    cout<<j<<endl;
    return 0;
}
