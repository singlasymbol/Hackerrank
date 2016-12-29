#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int i, j, k, n, len, t;
    
    cin >> t;
    
    while( t-- )
    {
        string str;
        bool flag = 0;
        cin >> str;
        len = str.length();
      //  cout<<len<<endl;
       // cout<<str[33]<<endl;
        for(i = 0 ; i < len ;i++)
        {
            if(str[i] != str[len - i - 1])
            {
                //cout<<str[len-i-1]<<endl;
               // cout<<str[i]<<endl;
                flag = 1;
                if( str[i] == str[len - i - 2] && str[i+1] == str[ len - i -3])
                {
                    cout << len - i -1 << endl;  
                    break;
                }
                else
                {
                    cout << i << endl; 
                    break;
                }
            }
        }
        
        if(flag == 0)
        {
            cout << "-1"<<endl;   
        }
    }
    
    return 0;
}
