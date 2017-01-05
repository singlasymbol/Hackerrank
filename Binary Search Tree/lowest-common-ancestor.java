

 /* Node is defined as :
 class Node 
    int data;
    Node left;
    Node right;
    
    */

static Node lca(Node root,int v1,int v2)
    {
     
        if(v2 < v1)
        {
            int temp = v2;
            v2 = v1;
            v1 = temp;
        }
         if(root == null)
             return null;
      
      if(root.data > v1 && root.data < v2)
        {
            return root;    
        }
        
        else
        {
            if(root.data == v1 || root.data == v2)
            {
                return root;    
            }
            
            if(root.data > v1 && root.data  > v2)
            {
                return lca(root.left,v1,v2);    
            }
            
            return lca(root.right,v1,v2);
        }
       
    }




