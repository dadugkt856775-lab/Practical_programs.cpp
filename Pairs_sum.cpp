#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    vector<int> v = {1, 5, 7, -1, 5, 3, 3};
    int target = 6;

    unordered_map<int, int> freq;

    int pairs = 0;

    for (int x : v) {
        int required = target - x;

        if (freq.find(required) != freq.end())
            pairs += freq[required];

        freq[x]++;
    }

    cout << "Number of pairs = " << pairs;

    return 0;
}
