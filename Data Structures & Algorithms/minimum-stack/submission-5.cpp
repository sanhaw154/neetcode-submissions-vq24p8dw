class MinStack {
    stack<long>difStack;
    long min;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        if(difStack.empty())
        {
            difStack.push(0);
            min = val;
        }
        else
        {
            difStack.push(val - min); //異號相減時有可能overflow
            //eg. (2^31-1) - (-2^31) = 2^32 -1 (signed int overflow)
            if(val < min) min = val;
        }
    }
    
    void pop() {
        if(difStack.empty()) return;
        long pop = difStack.top(); //pop = val - min
        if(pop < 0)
        {
            min = min - pop; 
        }
        difStack.pop();
    }
    
    int top() {
        long top = difStack.top();
        if(top < 0)
        {
            return min;
        }
        else
        {
            top = top + min;
            return (int)top; 
        }
    }
    
    int getMin() {
        return min;
    }
};
