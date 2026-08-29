#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {
        4, 6, 2, 4, 3, 6, 4, 2, 6, 6
    };

    unordered_map<int, int> freq;

    for (int x : v)
        freq[x]++;

    sort(v.begin(), v.end(),
        [&](int a, int b) {

            if (freq[a] != freq[b])
                return freq[a] > freq[b];

            return a < b;
        }
    );

    cout << "Frequency sorted array: ";

    for (int x : v)
        cout << x << " ";

    return 0;
}
