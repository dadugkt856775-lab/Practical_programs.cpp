#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>
using namespace std;

int main() {
    vector<char> tasks = {
        'A', 'A', 'A',
        'B', 'B', 'B',
        'C', 'C'
    };

    unordered_map<char, int> freq;

    for (char task : tasks)
        freq[task]++;

    priority_queue<int> pq;

    for (auto x : freq)
        pq.push(x.second);

    int time = 0;

    while (!pq.empty()) {

        vector<int> temp;

        int cycle = 2;

        while (cycle >= 0 && !pq.empty()) {

            int count = pq.top();
            pq.pop();

            count--;

            if (count > 0)
                temp.push_back(count);

            time++;
            cycle--;
        }

        for (int x : temp)
            pq.push(x);

        if (!pq.empty())
            time += cycle + 1;
    }

    cout << "Minimum time = " << time;

    return 0;
}
