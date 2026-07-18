class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        // code here
        int low=0;
        int res = -1;
        unordered_map<char, int> mp;
        for(int high=0;high<s.size();high++){
            mp[s[high]]++;
            while(mp.size()>k){
                mp[s[low]]--;
                if(mp[s[low]]==0){
                    mp.erase(s[low]);
                }
                low++;
            }
            if(mp.size()==k){
                int len = high-low+1;
                res = max(len,res);
            }
            
            
        }
          
        return res;
    }
};