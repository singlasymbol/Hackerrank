 import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

class Graph
{
    int v;
    private LinkedList<Integer> [] adj ;
    private boolean [] visited;
    private int [] edgeTo;
    
    Graph(int v)
    {
        this.adj =  new LinkedList[v +1 ];
        this.visited  = new boolean[v + 1];
        this.edgeTo = new int[v + 1];
        
        this.v = v;
        
        for(int i = 1; i <= v; i++)
            this.adj[i] = new LinkedList<Integer>();
            
    }
    
    public void enqueue(int first,int second)
    {
        adj[first].add(second);
        adj[second].add(first);
    }
    
    public void bfs(int source)
    {
        Queue<Integer> q;
        Integer w;
        q = new LinkedList<Integer>();
        q.add(source);
        visited[source] = true;
        
        while(q.isEmpty() != true)
        {
            w = q.remove();
            
            for(Integer v : adj[w])
            {
                if(!visited[v])
                {
                    q.add(v);
                    edgeTo[v] = w;
                    visited[v] = true;                    
                }
            }
        }
        
    }
    
    public void output(int source)
    {
        int s ,count;
        ArrayList arr = new ArrayList();
        
        for(int i = 1; i <=  v; i++)
        {
            if(i != source)
            {
                if(visited[i] == false)
                {
                    arr.add(-1);
                }
                else
                {
                    s = i;
                    count = 1;
                    while(edgeTo[s] != source)
                    {
                        count = count + 1;
                        s = edgeTo[s];
                     }
                    
                     arr.add(count * 6);
                  }
              }
          }
        
         for(int i = 0 ;i< arr.size();i++)
         {
            System.out.print(arr.get(i) + " ");    
         }
        System.out.println();
      }
        
}

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
        int i, j, q, t, v, e, first, second,source; 
        Scanner scan = new Scanner(System.in);
       
        q = scan.nextInt();
        
        while(q != 0)
        {
            v = scan.nextInt();
            e = scan.nextInt();
            Graph g = new Graph(v);
            
            while( e != 0)
            {
                first = scan.nextInt();
                second = scan.nextInt();
                
                g.enqueue(first,second);
                e = e - 1;
            }
            source = scan.nextInt();
            
            g.bfs(source);
           g.output(source);
            q = q - 1;    
        }
        
    }
}