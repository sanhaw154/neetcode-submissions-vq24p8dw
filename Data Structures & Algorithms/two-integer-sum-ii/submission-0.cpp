class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> res;
        auto front = 0;
        auto rear = numbers.size()-1;
        while(front <= rear)
        {
            if(numbers[front] + numbers[rear] == target)
            {
                res.push_back(front+1);
                res.push_back(rear+1);
                return res;
            }
            if(numbers[front] + numbers[rear] < target)
            {
                front++;
            }
            else
            {
                rear--;
            }
        }
        return res;
    }
};
