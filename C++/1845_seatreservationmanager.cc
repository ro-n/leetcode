#include <vector>
#include <queue>
// Mon May  3 13:44:50 2021

using namespace std;

class SeatManager {
  priority_queue<int, vector<int>, greater<int>> unresed;
public:
  SeatManager(int n) {
    for (int i = 1; i <=n; i++) unresed.push(i);
  }
  
  int reserve() {
    int ret = unresed.top();
    unresed.pop();
    return ret;
  }
  
  void unreserve(int seatNumber) {
    unresed.push(seatNumber);
  }
};
