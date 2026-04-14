class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        vector<int>stack;
        int a1;
        int a2;
        for(auto token : tokens)
        {   
            if(token == "+" || token == "-" || token == "*" || token == "/")
            {
                a2 = stack.back();
                stack.pop_back();
                a1 = stack.back();
                stack.pop_back();
                char c = token[0];
                switch (c)
                {
                    case '+':
                    a1 += a2;
                    break;
                    case '-':
                    a1 -= a2;
                    break;
                    case '*':
                    a1 *= a2;
                    break;
                    case '/':
                    a1 /= a2;
                    break;
                }
                stack.push_back(a1);
            }
            else
            {
                stack.push_back(stoi(token));
            }
        }
        return stack.back();
    }
};
