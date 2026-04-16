class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        vector<vector<int>> res;
        int target = 0;
        int front = 0;
        int rear = 0;
        for(int i = 0 ; i < nums.size()-2 ; i++)
        {
            if( i > 0 && nums[i] == nums[i-1]) continue;
            
            target = nums[i];
            target = -target;
            front = i+1;
            rear = nums.size()-1;
            while(front < rear)
            {
                if(nums[front] + nums[rear] == target)
                {
                    res.push_back({nums[i],nums[front],nums[rear]});
                    front++;
                    rear--;
                    while (front < rear && nums[front] == nums[front - 1]) front++;
                    while (front < rear && nums[rear] == nums[rear + 1]) rear--;
                }
                else if(nums[front] + nums[rear] < target)
                {
                    front++;
                }
                else
                {
                    rear--;
                }
            }
        }
        return res;
    }
};
