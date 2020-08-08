# 2020-08-07 23:52:39

class MinStack:

    def __init__(self):
        """
        initialize your data structure here.
        """
        self.min_ = []
        self.stack = []
        

    def push(self, x: int) -> None:
        self.stack.append(x) 
        if len(self.min_) ==  0 or self.getMin() >= x:
            self.min_.append(x)


    def pop(self) -> None:
        if self.min_[-1] == self.top():
            self.min_.pop()
        self.stack.pop()


    def top(self) -> int:
        return self.stack[-1]
        

    def getMin(self) -> int:
        return self.min_[-1]


# Your MinStack object will be instantiated and called as such:
# obj = MinStack()
# obj.push(x)
# obj.pop()
# param_3 = obj.top()
# param_4 = obj.getMin()