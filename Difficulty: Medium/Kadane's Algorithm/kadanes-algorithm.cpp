class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
        int be=arr[0];
        int res=arr[0];
        for(int i=1;i<arr.size();i++){
            int v1=be+arr[i];
            int v2=arr[i];
            be=max(v1,v2);
            res=max(res,be);
        }
        return res;
        
        
    }
};