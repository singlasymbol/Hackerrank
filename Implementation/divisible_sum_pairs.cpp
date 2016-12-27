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
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
       cin >> a[a_i];
    }
    int i,j,l,count=0;
    
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
            {
            l=a[i]+a[j];
            
            if(l%k==0)
                {
            //    cout<<i<<" "<<j<<endl;
                count++;
            }
        }
    }
    
    cout<<count<<endl;
    return 0;
}
