class Solution {
  public:
    int longestUniqueSubstr(string &s) {
        // code here
        int n=s.size();
        
        unordered_map<char,int> mp;
        int maxlen=INT_MIN;
        int low=0;
        for(int high=0;high<n;high++){
            mp[s[high]]++;
            while(mp[s[high]]>1){
                mp[s[low]]--;
                low++;
            }
            int len=high-low+1;
            maxlen=max(maxlen,len);
            
        }
        return (maxlen==INT_MIN)? 0:maxlen;
        
    }
};
