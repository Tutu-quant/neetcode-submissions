class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> umap;
        vector<vector<string>> res;

        for (string s : strs)
        {
            string sSort = s;
            sort(sSort.begin(), sSort.end());
            umap[sSort].push_back(s);
        }

        for(auto &x: umap)
        {
            res.push_back(move(x.second));
        }
        return res;

    }
};
