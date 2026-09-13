class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        // code here
        int n=arr.size();
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            int complement=target-arr[i];
            if(mp.find(complement)!=mp.end()){
                return true;
            }
            mp[arr[i]]=i;
        }
        return false;
    }
    
};