#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    vector<int> v = {10, 5, 2, 7, 1, 9};
    int k = 15;

    unordered_map<int, int> mp;

    int sum = 0;
    int longest = 0;

    for (int i = 0; i < v.size(); i++) {
        sum += v[i];

        if (sum == k)
            longest = i + 1;

        if (mp.find(sum - k) != mp.end()) {
            longest = max(longest, i - mp[sum - k]);
        }

        if (mp.find(sum) == mp.end())
            mp[sum] = i;
    }

    cout << "Longest subarray length = " << longest;

    return 0;
}
