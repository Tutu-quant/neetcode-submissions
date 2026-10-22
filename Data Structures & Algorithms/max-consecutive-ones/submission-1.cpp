class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int curr = 0;
        int total = 0;

        for(int i = 0; i < nums.size(); i++){
            if (nums[i] ==  1){
                curr += 1;
                total = max(total, curr);
            }
            else if (nums[i] == 0){
                curr = 0;
            }
        }
        return total;
    }
};