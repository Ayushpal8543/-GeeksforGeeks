class Solution {
  public:
    int maxWater(vector<int> &arr) {
        // code here
        int n=arr.size();
        int i=0,j=n-1;
        int ans=0;
        while(i<j){
            int area=min(arr[i],arr[j])*(j-i);
            ans=max(ans,area);
            if(arr[i]<arr[j]){
                i++;
            }else{
                j--;
            }
        }
        return ans;
    }
};