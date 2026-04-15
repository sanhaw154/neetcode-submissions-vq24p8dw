class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> res(temperatures.size());
        bool seted = false;
        for(int i = 0 ; i < temperatures.size() ; i++)
        {
            for(int j = i + 1 ; j < temperatures.size() ; j++)
            {
                seted = false;
                if(temperatures[j] > temperatures[i])
                {
                    res[i] = j - i;
                    seted = true;
                    break;
                }
            }
            if(!seted) res[i] = 0;
        }
        return res;
        
    }
};
