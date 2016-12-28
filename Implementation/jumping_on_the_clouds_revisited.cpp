#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n;
    int k;
    cin >> n >> k;
    vector<int> c(n);
    for(int c_i = 0;c_i < n;c_i++){
       cin >> c[c_i];
    }
    
    long long int i, j,  e = 100, x= 0,q;
    
    if(k == 0)
    {
        cout<< e << endl;
        
    }
    else
    {
        do
        {
           x = x + k;
            x = x % n;
            
           if( c[x] == 0)
           {
               e--;
           }
           else
               e = e - 3;
        }
         while(x % n != 0);
    }
    cout<< e;
    return 0;
}
