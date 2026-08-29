#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {7, 2, 10, 4, 6, 8, 1};

    priority_queue<int> maxHeap;
    priority_queue<int, vector<int>, greater<int>> minHeap;

    for (int x : v) {
        maxHeap.push(x);
    }

    vector<int> sorted;

    while (!maxHeap.empty()) {
        sorted.push_back(maxHeap.top());
        maxHeap.pop();
    }

    reverse(sorted.begin(), sorted.end());

    int n = sorted.size();

    if (n % 2 == 1) {
        cout << "Median = "
             << sorted[n / 2];
    } else {
        double median =
            (sorted[n / 2 - 1] + sorted[n / 2]) / 2.0;

        cout << "Median = " << median;
    }

    return 0;
}
