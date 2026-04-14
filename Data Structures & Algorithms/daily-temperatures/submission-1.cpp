class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> res(temperatures.size());
        vector<pair<int,int>> stack;
        stack.push_back(pair<int,int>(temperatures[0] , 0));
        int pop_index = 0;
        // int pop_temp;
        for(int i = 1; i < temperatures.size(); i++)
        {  
            while(temperatures[i] > stack.back().first && !stack.empty())
            {
                pop_index = stack.back().second;
                // pop_temp = stack.back().first;
                stack.pop_back();
                res[pop_index] = i - pop_index;
            }
            stack.push_back(pair<int,int>(temperatures[i] , i));
        }
        while(!stack.empty())
                {
                    pop_index = stack.back().second;
                    // pop_temp = stack.back().first;
                    stack.pop_back();
                    res[pop_index] = 0;
                }
        return res;
    }
};
