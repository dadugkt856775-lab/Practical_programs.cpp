#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    vector<int> v = {
        10, 4, 8, 20, 15, 2, 6
    };

    int k = 3;

    priority_queue<int> pq;

    for (int x : v) {

        pq.push(x);

        if (pq.size() > k)
            pq.pop();
    }

    cout << "Kth smallest element = "
         << pq.top();

    return 0;
}
