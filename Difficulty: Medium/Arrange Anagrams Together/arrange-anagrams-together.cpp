class Solution {
  public:
    vector<vector<string>> anagrams(vector<string>& arr) {
        // code here
        unordered_map<string,vector<string>> mp;
        for(auto s : arr){
            string key=s;
            sort(key.begin(),key.end());
            mp[key].push_back(s);
        }
        vector<vector<string>> ans;
        for(auto it : mp){
            ans.push_back(it.second);
        }
        return ans;
        
    }
};