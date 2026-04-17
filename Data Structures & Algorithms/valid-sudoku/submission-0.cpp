class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int,int> row[9];
        unordered_map<int,int> col[9];
        unordered_map<int,int> square[9];
        int pos_sq = 0;;
        for(int i = 0 ; i < 9 ; i++)
        {
            for(int j = 0 ; j < 9 ; j++)
            {
                pos_sq = i / 3 * 3 + j / 3;
                char ele = board[i][j];
                if(isdigit(ele))
                {
                    if(!(row[i].insert({ele,1}).second)
                        || !(col[j].insert({ele,1}).second)
                        || !(square[pos_sq].insert({ele,1}).second)) //insert 回傳值為<iterator,bool> bool為F表插入失敗(已存在)
                    {
                        return false;
                    }
                }
            }
        }
        return true;
    }
};
