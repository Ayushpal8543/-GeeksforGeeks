class Solution {
  public:
    int minMeetingRooms(vector<int> &start, vector<int> &end) {
        // code here
        int n=start.size();
        int m=end.size();
        sort(start.begin(),start.end());
        sort(end.begin(),end.end());
        int i=0,j=0,res=0,room=0;
        while(i<n && j<m){
            if(start[i]<end[j]){
                i++;
                room++;
                res=max(room,res);
            }
            else{
               j++;
               room--;
               res=max(room,res);
            }
        }
        return res;
        
    }
};
