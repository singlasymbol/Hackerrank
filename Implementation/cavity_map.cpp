#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n,i,j,k,l,o;
    cin >> n;
    vector<string> grid(n);
    
    for(int grid_i = 0;grid_i < n;grid_i++){
       cin >> grid[grid_i];
    }
    
    for(i=0;i<n;i++)
       {
        k=grid[i].size();
        for(j=0;j<k;j++)
            {
                if(i!=0 && i!=k-1 && j!=0 && j!=k-1)
                    {
                  //  cout<<grid[i][j]<<" ";
                    if(grid[i-1][j]<grid[i][j] && grid[i+1][j]<grid[i][j] && grid[i][j-1]<grid[i][j] && grid[i][j+1]<grid[i][j])
                    {
                        grid[i][j]='X';
                    }
                }
            }
        }
      
    
       for(int grid_i = 0;grid_i < n;grid_i++){
       cout << grid[grid_i]<<endl;
    }

    return 0;
}

