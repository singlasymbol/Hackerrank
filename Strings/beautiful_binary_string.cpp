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
    string B;
    cin >> B;
    int sum = 0;
    if(B.length() == 3 )
    {
        if(B[0] == '0' && B[1]== '1' && B[2] == '0')
        {
            cout<<"1"<<endl;
        }
        else
            cout<<"0"<<endl;
    }
    else
    {
       for(int i =0 ; i<B.length(); i++)
       {
        
            if(B[i] == '0' && B[i + 1]== '1' && B[i + 2] == '0')
            {
                sum++;
                i = i + 2;
            }
           
       }
        
        cout<< sum <<endl;
    }
           
           
    return 0;
}
