class Solution {
  public:
    vector<int> spirallyTraverse(vector<vector<int>> &mat) {
        // code here
        int n=mat.size();
        int m=mat[0].size();
        int top=0;
        int bottom=n-1;
        int left=0;
        int right=m-1;
        vector<int> ans;
        
        while(top<=bottom && left<=right){
            //left->right
            for(int i=left;i<=right;i++){
                ans.push_back(mat[top][i]);
            }
            top++;
            //yop->bottom
            for(int i=top;i<=bottom;i++){
                ans.push_back(mat[i][right]);
            }
            right--;
            //right->left
            if(top<=bottom){
                for(int i=right;i>=left;i--){
                    ans.push_back(mat[bottom][i]);
                }
                bottom--;
            }
            //bottom->top
            if(left<=right){
                for(int i=bottom;i>=top;i--){
                    ans.push_back(mat[i][left]);
                }
                left++;
            }
        }
        return ans;
    }
};