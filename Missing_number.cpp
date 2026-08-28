#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 5, 6, 7};

    int n = 7;

    unordered_set<int> s(v.begin(), v.end());

    for (int i = 1; i <= n; i++) {
        if (!s.count(i)) {
            cout << "Missing number = " << i;
            break;
        }
    }

    return 0;
}
