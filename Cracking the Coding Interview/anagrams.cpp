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

int number_needed(string a, string b) {
    int count_a[26] = {0};
    int count_b[26] ={0};
    
    for(int i =0; i < a.length(); i++)
    {
        count_a[a[i] - 97]++;    
    }
    
    for(int i =0; i < b.length(); i++)
    {
        count_b[b[i] - 97]++;    
    }
    int diff = 0;
    
    for(int i =0;i < 26;i++)
    {
        if(count_a[i] != count_b[i])
        {
            diff = diff+ abs(count_a[i] - count_b[i]);    
        }
                             
    }
        return diff;
}

int main(){
    string a;
    cin >> a;
    string b;
    cin >> b;
    cout << number_needed(a, b) << endl;
    return 0;
}
