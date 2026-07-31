class Solution {
  public:
    int totalElements(vector<int> &arr) {
        // code here
        int n=arr.size();
        int maxLen=INT_MIN;
        int low=0;
        unordered_map<int,int> mp;
        for(int high=0;high<n;high++){
            mp[arr[high]]++;
            while(mp.size()>2){
                mp[arr[low]]--;
                if(mp[arr[low]]==0){
                    mp.erase(arr[low]);
                }
                low++;
            }
            int len=high-low+1;
            maxLen=max(maxLen,len);
        }
        return (maxLen==INT_MIN) ? 0:maxLen;
        
    }
};