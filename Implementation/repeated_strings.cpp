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
    long n;
    cin >> n;
    long long int l=s.length();
    long long int count=0;
  
    for(long long int i = 0;i < l; i++)
    {
        if(s[i] == 'a')
        {
            count++;  
        }
    }
    
    long long int temp = n % l;
    long long int i,j = 0;
    
    long long int div = n /l;
    
    count= count * div;
   // cout<<"temp "<<temp;
    for(i =0; i < temp; i++)
    {
        if(s[i] == 'a')
            j++;
    }
    
   // cout<<j<<endl;
    cout<< count + j;
        return 0; 
    
    
    
}