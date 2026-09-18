class Solution {
  public:
    bool fun(vector<int>& arr,int n,int k,int guess){
        int cow=1;
        int pos=arr[0];
        for(int i=1;i<n;i++){
            int dis=arr[i]-pos;
            if(dis<guess){
                continue;
            }
            cow++;
            pos=arr[i];
        }
        if(cow>=k){
            return true;
        }
        return false;
    }
    int aggressiveCows(vector<int> &arr, int k) {
        // code here
        int n=arr.size();
        sort(arr.begin(),arr.end());
        int low=1,high=arr[n-1]-arr[0];
        int res=-1;
        while(low<=high){
            int guess=low+(high-low)/2;
            if(fun(arr,n,k,guess)){
                res=guess;
                low=guess+1;
            }
            else{
                high=guess-1;
            }
            
        }
        return res;
    }
};