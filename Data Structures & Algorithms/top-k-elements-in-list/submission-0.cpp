class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        vector<int> res;
        unordered_map<int,int>countFreq;
        for(auto num : nums)
        {
            countFreq[num]++;
        }
        while(k--)
        {
            auto max =countFreq.begin();
            for(auto it = countFreq.begin(); it != countFreq.end(); it++)
            {
                if(max->second < it->second)
                {
                  max = it;  
                }
            }
            res.push_back(max->first);
            countFreq.erase(max);
        }
        return res;
    }
};
