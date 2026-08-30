#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    vector<int> a = {1, 5, 10, 20, 40, 80};
    vector<int> b = {6, 7, 20, 80, 100};
    vector<int> c = {3, 4, 15, 20, 30, 70, 80};

    set<int> s1(a.begin(), a.end());
    set<int> s2;

    for (int x : b) {
        if (s1.count(x))
            s2.insert(x);
    }

    cout << "Common elements: ";

    for (int x : c) {
        if (s2.count(x))
            cout << x << " ";
    }

    return 0;
}
