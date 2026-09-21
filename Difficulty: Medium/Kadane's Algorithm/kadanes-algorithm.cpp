class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Code here
        int n=arr.size();
        int bestending=arr[0];
        int ans=arr[0];
        for(int i=1;i<n;i++){
            int v1=bestending+arr[i];
            int v2=arr[i];
            bestending=max(v1,v2);
            ans=max(ans,bestending);
        }
        return ans;
    }
};