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
    int m;
    cin >> n >> m;
    vector<int> c(m);
    for(int c_i = 0;c_i < m;c_i++){
       cin >> c[c_i];
    }
    
    int i,j, q,t,min,max = 0,arr[100001];
    
    for(i = 0; i < n ; i++)
    {
        min = 100001 ;
        for(j = 0; j < m;j++)
        {
            if(abs(i - c[j]) < min)
            {
                min = abs(i - c[j]);    
            }
        }
        if(min > max)
        {
            max = min;
        }
    }
    
    cout<< max;
    return 0;
}
