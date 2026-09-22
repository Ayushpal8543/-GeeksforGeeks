class Solution {
  public:
    bool isPalinSent(string &s) {
        // code here
        string str = "";
        for(char ch : s){
            if(isalnum(ch)){
                str+=tolower(ch);
            }
        }
        int left=0,right=str.size()-1;
        while(left<right){
            if(str[left]!=str[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
        
    }
};