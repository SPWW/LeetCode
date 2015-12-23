/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */
 


public class Solution {
    public static void inv(TreeNode root)
    {
                
        if(root.left == null && root.right == null){
            return ;
        }
        
        TreeNode Temp = null;
        Temp = root.right;
        root.right = root.left;
        root.left = Temp;
        if(root.left != null){
            inv(root.left);
        }

        if(root.right != null){
            inv(root.right);            
        }

        
        return ;
    }
   
   
    public TreeNode invertTree(TreeNode root) {
        
        if(root != null){
            inv(root);
        }
        return root;
    }
}
