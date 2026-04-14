class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>> greatestOrder(position.size());
        for(int i = 0; i < position.size(); i++)
        {
            greatestOrder[i] = {position[i], speed[i]};
        }
        sort(greatestOrder.rbegin(),greatestOrder.rend());
        vector<pair<int,int>> stack;
        for(int i = 0 ; i < position.size() ; i++ )
        {
            stack.push_back(greatestOrder[i]);
            if(stack.size()>=2 && 
            stack[stack.size() - 2].second * (target - stack.back().first)
                <= stack.back().second * (target - stack[stack.size() - 2].first))
                {
                    stack.pop_back();
                }
        }
        return stack.size();
        
    }
};
