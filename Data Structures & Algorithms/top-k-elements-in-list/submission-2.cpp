class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        unordered_map<int,int>countFreq;
        for(int& num : nums)
        {
            countFreq[num]++;
        }
        vector<vector<int>> bucket(nums.size() + 1);
        for(auto& entry : countFreq)
        {
            bucket[entry.second].push_back(entry.first);
        }
        vector<int> res;
        for(auto it = bucket.rbegin(); it != bucket.rend(); ++it)
        {
            for(int& num : *it)
            {
                res.push_back(num);
                if(res.size() == k)
                {
                    return res;
                }
            }
        }
        return res;
    }
};
