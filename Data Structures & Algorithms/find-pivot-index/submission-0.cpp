class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int totalSum = 0;
        int sum_left = 0;

        // Bước 1: Tính tổng toàn bộ mảng
        for(int i = 0; i < nums.size(); i++){totalSum = totalSum + nums[i];}

        // Bước 2: Duyệt từng phần tử
        for (int i = 0; i < nums.size(); i++) {

            // Tính tổng bên phải
            int sum_right = totalSum - sum_left - nums[i];

            // Kiểm tra pivot
            if(sum_left == sum_right){return i;}

            // Cập nhật sum_left    
            else{sum_left += nums[i];}

        }

        return -1;
    }
};