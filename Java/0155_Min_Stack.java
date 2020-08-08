import java.util.Stack;

// 2020-08-07 17:25:37

class MinStack {


    private Stack<Integer> stack = new Stack<>();
    private Stack<Integer> min = new Stack<>();

    /** initialize your data structure here. */
    public MinStack() {}
    
    public void push(int x) {
        stack.push(x);
        if (min.isEmpty() || x <= getMin()) min.push(x);
    }
    
    public void pop() {
        if (stack.peek() == getMin()) min.pop();
        stack.pop();
    }
    
    public int top() {
        return stack.peek();
    }
    
    public int getMin() {
        return min.peek();
    }
}

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(x);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */