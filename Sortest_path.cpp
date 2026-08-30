#include <iostream>
#include <vector>
#include <queue>
#include <climits>
using namespace std;

int main() {

    int n = 5;

    vector<vector<pair<int, int>>> graph(n);

    // graph[u].push_back({v, weight})

    graph[0].push_back({1, 4});
    graph[0].push_back({2, 1});

    graph[1].push_back({3, 1});

    graph[2].push_back({1, 2});
    graph[2].push_back({3, 5});

    graph[3].push_back({4, 3});

    vector<int> distance(n, INT_MAX);

    priority_queue<
        pair<int, int>,
        vector<pair<int, int>>,
        greater<pair<int, int>>
    > pq;

    int source = 0;

    distance[source] = 0;

    pq.push({0, source});

    while (!pq.empty()) {

        int currentDistance = pq.top().first;
        int node = pq.top().second;

        pq.pop();

        if (currentDistance > distance[node])
            continue;

        for (auto edge : graph[node]) {

            int nextNode = edge.first;
            int weight = edge.second;

            if (distance[node] + weight <
                distance[nextNode]) {

                distance[nextNode] =
                    distance[node] + weight;

                pq.push({
                    distance[nextNode],
                    nextNode
                });
            }
        }
    }

    cout << "Shortest distances from node 0:\n";

    for (int i = 0; i < n; i++) {

        cout << "Node " << i << " = "
             << distance[i] << endl;
    }

    return 0;
}
