class Solution {
public:

    string encode(vector<string>& strs) {
        string str;
        string pattern = "à";
        for(auto& s : strs)
        {
            str += s;
            str += pattern;
        }
        return str;
    }

    vector<string> decode(string s) {
        vector<string> strs = {};
        string pattern = "à";
        size_t begin = 0;
        size_t end = s.find(pattern);
        
        while(end != string::npos)
        {
            if(end - begin != 0)
            {
                strs.push_back(s.substr(begin,end - begin));
            }
            else
            {
                strs.push_back("");
            }
            begin = end + pattern.size();
            end = s.find(pattern,begin);
        }
        return strs;
    }
};
