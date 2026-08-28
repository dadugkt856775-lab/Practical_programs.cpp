#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <queue>
using namespace std;

int main() {
    vector<string> words = {
        "apple", "banana", "apple",
        "orange", "banana", "apple",
        "grape", "orange", "banana"
    };

    int k = 2;

    unordered_map<string, int> freq;

    // Count frequency
    for (string word : words) {
        freq[word]++;
    }

    // Max heap
    priority_queue<pair<int, string>> pq;

    for (auto x : freq) {
        pq.push({x.second, x.first});
    }

    cout << "Top " << k << " frequent words:\n";

    for (int i = 0; i < k && !pq.empty(); i++) {
        cout << pq.top().second
             << " -> "
             << pq.top().first << endl;

        pq.pop();
    }

    return 0;
}
