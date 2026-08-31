#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    vector<int> v = {
        2, 5, 2, 8, 2, 5, 9, 8, 2
    };

    unordered_map<int, int> freq;

    for (int x : v)
        freq[x]++;

    int element = v[0];
    int maximum = 0;

    for (auto x : freq) {
        if (x.second > maximum) {
            maximum = x.second;
            element = x.first;
        }
    }

    cout << "Most frequent element = " << element << endl;
    cout << "Frequency = " << maximum;

    return 0;
}
