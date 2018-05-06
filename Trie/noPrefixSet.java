import java.io.*;
import java.util.*;

public class Solution {

    static class TrieNode{
        
        TrieNode[] children = new TrieNode[26];;
        boolean endOfWord;
        
        TrieNode(){
            Arrays.fill(this.children, null);
            endOfWord = false;
        }
    }
    
    static class Trie {
        
        public boolean insert(TrieNode root, String str) {
            TrieNode iterator = root;
            
            for(int i = 0; i < str.length(); i++) {
                int index = str.charAt(i) - 'a';
    
                if(iterator.children[index] == null) {
                    iterator.children[index] = new TrieNode();
                } else if( iterator.children[index].endOfWord == true) {
                    return false;
                }
                iterator = iterator.children[index];

            }
            
            for(int i = 0;i < 26; i++) {
                if(iterator.children[i] != null) {
                    return false;
                }
            } // if base string comes after the main string
            
            iterator.endOfWord = true;
            
            return true;
        }
        
    }
    
    static TrieNode root;
    
    public static void main(String[] args) throws IOException {        
        InputStreamReader io = new InputStreamReader(System.in);
        BufferedReader br = new BufferedReader(io);
        
        TrieNode root = new TrieNode();
        int num = Integer.parseInt(br.readLine());
        Trie tr = new Trie();
        boolean isBad = false;
        
        while(num-- > 0){
            String str = br.readLine();
            // System.out.println("read " + str);
            if(!tr.insert(root, str)){
                System.out.println("BAD SET");
                System.out.println(str);
                isBad = true;
                break;
            }
        }
        
        if(!isBad) {
            System.out.println("GOOD SET");
        }
    }
}