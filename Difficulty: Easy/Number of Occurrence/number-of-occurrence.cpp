class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
        // code here
        int n=arr.size();
        int cnt=0;
        for(int i=0;i<n;i++){
            if(arr[i]==target){
                cnt++;
            }
        }
        return cnt;
    }
};
