
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> IsNumShow;
        for(auto it : nums)
        {
            if(IsNumShow.count(it)>0)
            {
                return true;
            }
            else IsNumShow.insert(it);
        }
        return false;
    }
};