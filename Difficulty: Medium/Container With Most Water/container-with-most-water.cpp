class Solution {
  public:
    int maxWater(vector<int> &arr) {
        // code here
        int n=arr.size();
        int left=0;
        int right=n-1;
        int ans=0;
        while(left<right){
            int area=min(arr[left],arr[right])*(right-left);
            ans=max(ans,area);
            if(arr[left]<arr[right]){
                left++;
            }else{
                right--;
            }
            
        }
        return ans;
        
        
    }
};