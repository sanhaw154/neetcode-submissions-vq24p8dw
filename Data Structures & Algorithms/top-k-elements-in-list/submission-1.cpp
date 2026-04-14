class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
       unordered_map<int,int>countFreq;
        for(auto& num : nums)
        {
            countFreq[num]++;
        }
        priority_queue <pair<int,int>> pq;
        for(auto& it : countFreq)
        {
            pq.push(pair<int,int>(it.second,it.first));
        } 
        vector<int>res;
        while(k--)
        {
            res.push_back(pq.top().second);
            pq.pop();
        }
        return res;
    }
};
