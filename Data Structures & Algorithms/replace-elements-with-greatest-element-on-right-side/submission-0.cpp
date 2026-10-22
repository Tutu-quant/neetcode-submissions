class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        int maxRight = arr[n - 1];

        for (int i = arr.size() - 2; i >= 0 ; i--){
            int curr = arr[i];
            arr[i] = maxRight;
            maxRight = max(curr, maxRight);
        }
         arr[n - 1] = -1;
        return arr;
    }        
};