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

bool is_balanced(string expression) {
    stack<char> st;
  
    for(int i =0 ;i < expression.length(); i++)
    {
        if(expression[i] == '{' || expression[i] == '(' || expression[i] == '[')
        {
            st.push(expression[i]);   
           // cout << expression[i] << " ";
        }
        else
        {
            if(st.empty() == true)
            {
                return false;
            }    
            char brace = st.top();
            if((expression[i] == ')' && brace != '(') || (expression[i] == ']' && brace != '[') || (expression[i] == '}' && brace != '{'))
            {
                return false;    
            }
            
            else
                st.pop();
        }
    }
    
    if(st.empty() == true)
        return true;
    
    return false;
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        string expression;
        cin >> expression;
        bool answer = is_balanced(expression);
        if(answer)
            cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
