#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<int> q;


    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Queue front: " << q.front() << endl;
    cout << "Queue size: " << q.size() << endl;

    
    q.pop();

    cout << "After one pop:" << endl;
    cout << "Queue front: " << q.front() << endl;
    cout << "Queue size: " << q.size() << endl;

    
    if (q.empty()) {
        cout << "Queue is empty!" << endl;
    } else {
        cout << "Queue is not empty!" << endl;
    }

    return 0;
}
