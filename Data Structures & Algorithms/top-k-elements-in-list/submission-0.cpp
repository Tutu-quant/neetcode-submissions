class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> umap;
        vector<int> res;
        for( int i : nums)
        {
            umap[i]++;
        }
        vector <pair <int, int>> freq(umap.begin(),umap.end());
        sort(freq.begin(), freq.end(), [](auto a, auto b) {
        return a.second > b.second;
        });
        for(int i  = 0; i < k; i++){
            res.push_back(freq[i].first);
        }
        return res;

    }
};
