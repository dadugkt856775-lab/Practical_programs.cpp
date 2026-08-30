#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    vector<int> ropes = {4, 3, 2, 6};

    priority_queue<
        int,
        vector<int>,
        greater<int>
    > pq;

    for (int x : ropes)
        pq.push(x);

    int totalCost = 0;

    while (pq.size() > 1) {

        int first = pq.top();
        pq.pop();

        int second = pq.top();
        pq.pop();

        int cost = first + second;

        totalCost += cost;

        pq.push(cost);
    }

    cout << "Minimum cost = " << totalCost;

    return 0;
}
