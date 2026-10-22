class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();
        int start = 0;
        int end = n-1;
        while(numbers[start]+numbers[end] != target){
            if(numbers[start] + numbers[end] < target){
                start++;
            }
            else if(numbers[start] + numbers[end] > target){
                end--;
            }
        }
        return {start + 1, end +1};
        
    }
};
