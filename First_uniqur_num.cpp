#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>
using namespace std;

int main() {
    vector<int> v = {
        4, 5, 1, 2, 1, 5, 4, 3
    };

    unordered_map<int, int> freq;

    for (int x : v)
        freq[x]++;

    queue<int> q;

    for (int x : v) {
        if (freq[x] == 1)
            q.push(x);
    }

    if (!q.empty())
        cout << "First unique number = " << q.front();
    else
        cout << "No unique number";

    return 0;
}
