class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();

        vector<vector<int>> result;

        for (int i = 0; i < n - 2; i++) {
            int start = i + 1;
            int end = n - 1;

            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }

            while (start < end) {
                int sum = nums[i] + nums[start] + nums[end];
                
                if (sum == 0) {
                    result.push_back({nums[i], nums[start], nums[end]});
                    while (start < end && nums[start] == nums[start + 1]) {start++;}
                    while (start < end && nums[end] == nums[end - 1]){end --;}

                    start++;
                    end--;
                }
                else if (sum < 0) {
                    start ++;
                }
                else if (sum > 0){
                    end--;
                }
            }
        }

        return result;
    }
};