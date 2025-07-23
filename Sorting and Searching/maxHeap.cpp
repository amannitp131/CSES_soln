#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    // Using std::priority_queue as a max heap
    priority_queue<int> maxHeap;

    maxHeap.push(10);
    maxHeap.push(20);
    maxHeap.push(5);
    maxHeap.push(30);

    cout << "Max: " << maxHeap.top() << endl;
    while (!maxHeap.empty()) {
        cout << maxHeap.top() << " ";
        maxHeap.pop();
    }
    cout << endl;
    return 0;
}
