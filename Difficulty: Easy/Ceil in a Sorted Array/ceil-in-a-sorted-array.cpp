class Solution {
  public:
    int findCeil(vector<int>& arr, int x) {
        // code here
        int n=arr.size();
        int res=-1;
        int low=0,high=n-1;
        while(low<=high){
            int guess=low+(high-low)/2;
            if(arr[guess]<x){
                low=guess+1;
            }
            else{
               res=guess;
               high=guess-1;
            }
        }
        return res;
    }
};