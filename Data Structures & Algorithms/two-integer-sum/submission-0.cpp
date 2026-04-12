class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>differ;
        int diff = 0;

        for(int i = 0; i < nums.size(); i++)
        {
            diff = target - nums[i];
            if( differ.count(diff) > 0 )
            {
                return {differ[diff],i};
            }
            else
            {
                differ.insert(pair<int,int>(nums[i],i));
            }
        }
        return {};
    }    
};
