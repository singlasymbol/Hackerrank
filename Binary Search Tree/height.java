	/*
    class Node 
    	int data;
    	Node left;
    	Node right;
	*/
	static int height(Node root) {
      	// Write your code here.
        
        if(root == null)
        {
            return 0;    
        }
        
        if(root.right != null && root.left != null)
        {
            int l_height = height(root.left);
            int r_height = height(root.right);
            return  1 + Math.max(l_height,r_height);
        }
        
        else if(root.left == null && root.right == null)
        {
                return 0;
        }
        
        else if(root.left != null && root.right == null)
        {
            return 1 + height(root.left);    
        }
        
        return 1+ height(root.right);
    }

	
	
	