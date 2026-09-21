class Solution {
  public:
    vector<int> factorial(int n) {
        vector<int> ans(1, 1);

        for(int num = 2; num <= n; num++) {
            int carry = 0;

            for(int i = 0; i < ans.size(); i++) {
                int value = ans[i] * num + carry;

                ans[i] = value % 10;
                carry = value / 10;
            }

            while(carry > 0) {
                ans.push_back(carry % 10);
                carry /= 10;
            }
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
};