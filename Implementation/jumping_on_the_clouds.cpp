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
    cin >> n;
    vector<int> arr(n);
    for(int c_i = 0;c_i < n;c_i++){
       cin >> arr[c_i];
    }
    
    
    int i=0 , j, k, count = 0;
    if(n == 2 )
        {
        cout<<"1";
    }
    else
        {
    while( i != n - 1 )
    { 
        if( arr[i + 1] == 0 && arr[i + 2] ==0 )    
        {
            i = i + 2;
            count++;
        }
        
        else if( arr[i + 1] == 0 && arr[i + 2]==1)
        {
            i++;
            count++;
        }    
         
        else if( arr[i + 1] == 1 && arr[ i + 2 ] == 0)
        {
            i = i + 2;
            count++;
        }
        
        else if( arr[i + 1] == 1 && arr[i + 2] == 1)
        {
            cout << "NO";
            count++;
            break;    
        }
        if( i == n -2)
            {
            count++;
            i++;
        }
    }
        
    cout<<count;
    }
    return 0;
}
