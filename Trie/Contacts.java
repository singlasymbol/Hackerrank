import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {
    
    static class TrieNode {
        TrieNode [] tr = new TrieNode[26];
        int count;
        TrieNode(){
            Arrays.fill(this.tr, null);
            count = 0;
        }
    }
    
    static TrieNode root;
    
    static class Trie {
        
        public void insert(String str, TrieNode root) {
//             TrieNode iterator = root;
            
//             for(int i = 0; i < str.length(); i++ ) {
//                 int index = str.charAt(i) - 'a';
                
//                 if(iterator.tr[index] == null) {
//                     iterator.tr[index] = new TrieNode();
//                 }
//                 iterator.count = iterator.count + 1;
//                 iterator = iterator.tr[index];

//             }
            TrieNode current = root;

            for(char c : str.toCharArray()) {
                int index = c - 'a';

                if(current.tr[index] == null) {
                    current.tr[index] = new TrieNode();
                }

                current.tr[index].count++;
                current = current.tr[index];
            }
    
        }
        
        public int search(String str, TrieNode root) {
//             TrieNode iterator = root;
            
//             for(int i = 0; i < str.length(); i++) {
//                 int index = str.charAt(i) - 'a';
                
//                 if(iterator.tr[index] == null) {
//                     return 0;
//                 }
//                 iterator = iterator.tr[index];
//             }
            
//             return iterator.count;
            TrieNode currentNode = root;

            // Traverse through each level
            for(char c : str.toCharArray()) {
                // Maintain a reference to the Node matching the char for that level
                currentNode = currentNode.tr[c - 'a'];

                if(currentNode == null) {
                    break;
                }
            }

            // Print the number of results
            return ((currentNode != null) ? currentNode.count : 0);
        }
        
    }

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        TrieNode root = new TrieNode();
        Trie trie = new Trie();
        for(int a0 = 0; a0 < n; a0++){
            String op = in.next();
            String contact = in.next();
            
            switch(op) {
                case "add":
                    trie.insert(contact, root);
                    break;
                case "find":
                    System.out.println(trie.search(contact, root));
                    break;
                default :
                    System.out.println("Should not come here!");
                    break;
            }
            
        }
        // trie.print(root);

    }
}
