class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        sort(nums.begin(),nums.end());

        int max_len = 0;
        int n = nums.size();
        int cur_len = 1;
        int last_ele = nums[0];
        for(int i = 1; i < n ; i++ )
        {
            if(last_ele  == nums[i]) continue;
            if(last_ele + 1 == nums[i])
            {
                cur_len++;
                last_ele = nums[i];
            }
            else
            {
                if(max_len < cur_len)
                {
                    max_len = cur_len;
                }
                cur_len = 1;
                last_ele = nums[i];
            }
        }
        if(max_len < cur_len)
        {
            max_len = cur_len;
        }
        return max_len;
    }
};
