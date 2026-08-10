class Solution {
  public:
    int smallestSumSubarray(vector<int>& arr) {
        // Code here
        int bestEnding=arr[0];
        int ans=arr[0];
        for(int i=1;i<arr.size();i++){
            int v1=bestEnding + arr[i];
            int v2=arr[i];
            bestEnding=min(v1,v2);
            ans=min(bestEnding,ans);
        }
        return ans;
    }
};
