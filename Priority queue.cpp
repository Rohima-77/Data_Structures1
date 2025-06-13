#include <iostream>
#include <queue>
using namespace std;

int main() {
    // Max-heap priority queue (default)
    priority_queue<int> pq;

    // Inserting elements
    pq.push(30);
    pq.push(10);
    pq.push(50);
    pq.push(20);

    cout << "Elements in priority queue (max-heap order):" << endl;

    // Accessing and removing elements
    while (!pq.empty()) {
        cout << pq.top() << " ";  // highest priority element
        pq.pop();                 // remove top element
    }

    return 0;
}
