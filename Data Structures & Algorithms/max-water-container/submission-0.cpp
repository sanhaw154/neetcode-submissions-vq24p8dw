class Solution {
public:
    int maxArea(vector<int>& heights) {
        int front = 0;
        int rear = heights.size()-1;
        int max_capcity = 0;
        int min_heights;
        while(front < rear)
        {
            
            min_heights = min(heights[front],heights[rear]);
            if(max_capcity < (rear - front) * min_heights)
            {
                max_capcity = (rear - front) * min_heights;
            }
            if(heights[front] < heights[rear])
            {
                front++;
            }
            else // '==' 發生時表示兩邊都是短版 哪一個pointer移動都沒差
            {
                rear--;
            }  
        }
        return max_capcity;
    }
};
