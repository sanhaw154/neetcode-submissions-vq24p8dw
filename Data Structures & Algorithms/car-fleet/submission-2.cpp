class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>> greatestOrder(position.size());
        for(int i = 0; i < position.size(); i++)
        {
            greatestOrder[i] = {position[i], speed[i]};
        }
        sort(greatestOrder.begin(),greatestOrder.end());
        int fleet = 1;
        int front_position = greatestOrder[position.size()-1].first;
        int front_speed = greatestOrder[position.size()-1].second;
        for(int i = position.size()-2; i >= 0; i--)
        {
            if(front_speed * (target - greatestOrder[i].first)
                > greatestOrder[i].second * (target - front_position))
            {
                fleet++;
                front_position = greatestOrder[i].first;
                front_speed = greatestOrder[i].second;
            }
                
        }
        return fleet;
    }
};
