#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    vector<int> v = {
        10, 45, 23, 67, 12, 89, 34, 56
    };

    int k = 3;

    priority_queue<
        int,
        vector<int>,
        greater<int>
    > pq;

    for (int x : v) {
        pq.push(x);

        if (pq.size() > k)
            pq.pop();
    }

    vector<int> result;

    while (!pq.empty()) {
        result.push_back(pq.top());
        pq.pop();
    }

    cout << "Top " << k << " largest elements: ";

    for (int i = result.size() - 1; i >= 0; i--)
        cout << result[i] << " ";

    return 0;
}
