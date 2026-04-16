class MinStack {
private:
    stack<int>myStack;
    stack<int>minStack;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        myStack.push(val);
        if(!minStack.empty())
        {
            minStack.push(min(minStack.top(),val));
        }
        else minStack.push(val);
    }
    
    void pop() {
        myStack.pop();
        minStack.pop();
    }
    
    int top() {
        return myStack.top();
    }
    
    int getMin() {
        return minStack.top();
    }
};
