// 2020-08-08 16:01:52

class MinStack {
  stack: number[] = []
  min: number[] = []

  constructor() {}

  push(x: number): void {
    this.stack.push(x)
    if (this.min.length == 0 || this.min[this.min.length - 1] >= x) {
      this.min.push(x)
    }
  }

  pop(): void {
    if (this.min[this.min.length - 1] == this.stack[this.stack.length - 1]) {
      this.min.pop()
    }
    this.stack.pop()
  }

  top(): number {
    return this.stack[this.stack.length - 1]
  }

  getMin(): number {
    return this.min[this.min.length - 1]
  }
}

/**
 * Your MinStack object will be instantiated and called as such:
 * var obj = new MinStack()
 * obj.push(x)
 * obj.pop()
 * var param_3 = obj.top()
 * var param_4 = obj.getMin()
 */
