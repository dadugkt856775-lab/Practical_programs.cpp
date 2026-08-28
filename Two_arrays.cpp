#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main() {
    vector<int> a = {1, 2, 3, 4, 5};
    vector<int> b = {3, 4, 5, 6, 7};

    unordered_set<int> s(a.begin(), a.end());
    unordered_set<int> result;

    for (int x : b) {
        if (s.count(x))
            result.insert(x);
    }

    cout << "Intersection: ";

    for (int x : result)
        cout << x << " ";

    return 0;
}
