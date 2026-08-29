#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    vector<int> v = {2, 7, 11, 2, 7, 15, 4, 5};
    int target = 9;

    unordered_map<int, int> freq;

    cout << "Pairs:\n";

    for (int x : v) {
        int required = target - x;

        if (freq[required] > 0) {
            cout << required << " + " << x
                 << " = " << target << endl;
        }

        freq[x]++;
    }

    return 0;
}
