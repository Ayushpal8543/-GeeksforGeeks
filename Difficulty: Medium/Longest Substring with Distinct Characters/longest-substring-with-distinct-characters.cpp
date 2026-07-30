class Solution {
  public:
    int longestUniqueSubstr(string &s) {
        // code here
        int n=s.size();
        int low=0;
        int maxLen=INT_MIN;
        unordered_map<char,int> mp;
        for(int high=0;high<n;high++){
            mp[s[high]]++;
            while(mp[s[high]]>1){
                mp[s[low]]--;
                low++;
            }
            int len=high-low+1;
            maxLen=max(maxLen,len);
        }
        return (maxLen==INT_MIN) ? 0:maxLen;
    }
};
