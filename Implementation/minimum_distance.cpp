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
    vector<int> A(n);
    for(int i = 0;i < n;i++){
       cin >> A[i];
    }
    int i, j, k;
  int  min = n,flag = 0;
    for( i = 0; i < n-1; i++)
    {
        for ( j =  i+1; j < n; j++)    
        {
            if(A[i] == A[j])
            {
                flag = 1;
                k = j - i;
                if(k < 0)
                    k = -k;
                
                if( k < min)
                {
                    min = k;    
                }
            }
        }
    }
    if (flag == 0)
        cout << "-1";
    else
    cout << min << endl;
    return 0;
}
