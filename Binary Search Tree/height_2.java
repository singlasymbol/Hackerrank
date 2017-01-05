	/*
    class Node 
    	int data;
    	Node left;
    	Node right;
	*/
	static int getHeight(Node root) {
      	// Write your code here.
        
        if(root == null)
            return 0;
        
        else
        {
            if(root.left != null || root.right != null)
            return 1+ Math.max( getHeight(root.left) , getHeight(root.right) ) ;
          }
        return 0;
    }
