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
    string s;
    cin >> s;
        
    int i, j, k, count = 1;
    
    for( i = 0 ; i < s.length() ; i++)
    {
        if( s[i]>= 65 && s[i] <=90 )
        {
               count++;
        }
    }
    
    cout<<count;
}

