class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string,vector<string>> count;
        for(auto& str : strs)
        {
            vector<int> alphabet(26,0);
            for(auto c : str)
            {
                alphabet[ c - 'a']++;
            }
            string key = to_string(alphabet[0]);
            for(int j = 1; j < 26;j++)
            {
                key += "," + to_string(alphabet[j]);
            }
            count[key].push_back(str);
        }
        vector<vector<string>> res;
        for(auto& pair : count)
        {
            res.push_back(pair.second);
        }
        return res;
    }
};
