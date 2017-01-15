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

void array_left_rotation(vector<int> a, int n, int k) {
    
    vector<int>copy;
    
    for(int i = 0;i < a.size();i++)
    {
        copy.push_back(a[i]);    
    }
    
    for(int i = 0;i < a.size();i++)
    {
        copy.push_back(a[i]);    
    }
    
    
    for(int i = k ; i < k+ n;i++ )
    {
        cout << copy[i] << " ";    
    }
      
    
}

int main(){
    int n;
    int k;
    cin >> n >> k;
    vector<int> a(n);
    for(int a_i = 0;a_i < n;a_i++){
        cin >> a[a_i];
    }
 array_left_rotation(a, n, k);
    return 0;
}
