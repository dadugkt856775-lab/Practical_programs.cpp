#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {
        100, 4, 200, 1, 3, 2
    };

    unordered_set<int> s(v.begin(), v.end());

    int longest = 0;

    for (int x : s) {

        // Start only if x-1 doesn't exist
        if (!s.count(x - 1)) {

            int current = x;
            int length = 1;

            while (s.count(current + 1)) {
                current++;
                length++;
            }

            longest = max(longest, length);
        }
    }

    cout << "Longest consecutive sequence = "
         << longest;

    return 0;
}
