import java.io.*;
import java.util.*;

public class Solution {

    static class Graph
    {
        int v;
        LinkedList<Integer>[] adj;
        boolean []marked;
        int [] id;
        
        Graph(int v)
        {
            this.v = v;
            this.adj = new LinkedList[v];
            this.marked = new boolean[v];
            this.id = new int[v];
            
            for(int i =0; i < v; i++)
            {
                adj[i] = new LinkedList<Integer>();
                marked[i] = false;
                id[i] = 0;
            }
        }  
            public void enqueue(int first,int second)
            {
                adj[first].add(second);
                adj[second].add(first);
            }
            
            public void dfs()
            {
                int id = 1;
                for(int i = 0; i< v;i++)
                {
                    if(!marked[i])
                    { 
                        dfs(i,id);
                        id++;
                    }
                }
                
              /*       System.out.println(id);
            
                for(int i =1; i< id;i++)
                {
                    System.out.println(this.id[i]);
                }*/
                combination(id - 1);
            }
            
            private void combination(int id)
            {
                long []arr = new long [id+ 1];
                long sum = 0;
                int i;
                for(i = id;i >0 ;i--)
                {
                    sum = sum + this.id[i];
                    arr[i] = sum;
                }
                /*
                for(i = 1;i<= id;i++)
                {
                    System.out.println(arr[i]);    
                }*/
                sum =0;
                for(i = 1;i< id;i++)
                {
                    sum = sum + (this.id[i] * arr[i + 1]); 
                }
                System.out.println(sum);
            }
            private void dfs(int s,int id)
            {
                marked[s] = true;
                this.id[id]++;
                
                for(Integer v : adj[s])
                {
                    if(!marked[v])
                        dfs(v,id);
                }
                
            }
        }
        
    
    
    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        Scanner scan = new Scanner(System.in);
        int n, k, i,first,second;
        
        n = scan.nextInt();
        i = scan.nextInt();
        
        Graph g = new Graph(n);
        while(i != 0)
        {
            first = scan.nextInt();
            second = scan.nextInt();
            g.enqueue(first,second);
            i = i - 1;    
        }
        g.dfs();
    }
}