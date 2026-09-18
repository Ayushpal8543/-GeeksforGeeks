class Solution {
  public:
    bool fun(vector<int>& arr, int n, long long guess, int k) {
        int stud = 1;
        long long page = 0;

        for (int i = 0; i < n; i++) {

            if (page + arr[i] <= guess) {
                page += arr[i];
            }
            else {
                stud++;
                page = arr[i];

                if (stud > k) {
                    return false;
                }
            }
        }

        return true;
    }

    int findPages(vector<int> &arr, int k) {
        int n = arr.size();

        if (n < k) {
            return -1;
        }

        long long low = 0;
        long long high = 0;

        for (int i = 0; i < n; i++) {
            low = max(low, (long long)arr[i]);
            high += arr[i];
        }

        long long res = -1;

        while (low <= high) {
            long long guess = low + (high - low) / 2;

            if (fun(arr, n, guess, k)) {
                res = guess;
                high = guess - 1;
            }
            else {
                low = guess + 1;
            }
        }

        return (int)res;
    }
};