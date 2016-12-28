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
    long long int t;
    cin >> t;
    
    long long int i, j, k,sum = 0,diff = 0,n = 0;

    while(sum < t)
    {
        sum  = sum + (3 * (pow(2,n)));
        n++;
    }
    n--;
    cout << sum - t + 1;
    return 0;
}
