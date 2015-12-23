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
 
    public static int touch(TreeNode node){
        
        if(node == null){
            
            return 0;
        }
        int nLeft = touch(node.left);
        int nRight = touch(node.right);
        
        return (nLeft>nRight)?(nLeft+1):(nRight+1);
    }
    
    
    
    public int maxDepth(TreeNode root) {
        
        return touch(root);
        
    }
}