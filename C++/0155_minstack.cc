// 2020-08-09 00:20:57

#include <vector>

using std::vector;

class MinStack {
public:
    /** initialize your data structure here. */
    MinStack() {

    }

    void push(int x) {
        if (min.empty() || min.back() >= x) {
            min.push_back(x);
        }
        stack.push_back(x);
    }

    void pop() {
        if (min.back() == stack.back()) {
            min.pop_back();
        }
        stack.pop_back();
    }

    int top() {
        return stack.back();
    }

    int getMin() {
        return min.back();
    }

private:
    vector<int> stack;
    vector<int> min;
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */