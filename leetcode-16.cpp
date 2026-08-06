class Solution {
public:
    int threeSumClosest(vector<int>& arr, int target) {
        sort(arr.begin(), arr.end());
        int n = arr.size();
        int bestdiff = INT_MAX;
        int result = 0;
        int sum;
        for (int i = 0; i < n - 2; i++) {
            int left = i + 1;
            int right = n - 1;

            while (left < right) {
                sum = arr[i] + arr[left] + arr[right];
                int diff = abs(sum - target);
                if (diff < bestdiff) {
                    bestdiff = diff;
                    result = sum;
                }
                if (sum < target) {
                    left++;
                } else {
                    right--;
                }
            }
        }
        return result;
    }
};
