class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int start = 0;
        int end = n - 1;
        int res = 0;
        while (start < end) {
            
            int area =min(heights[start],heights[end]) * (end-start);
             res = max(res,area);
            if (heights[start] < heights[end]) {
                start++;
            }
            else {
                end--;
            }
        }
        

        return res;
    }
};