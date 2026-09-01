#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main() {
    vector<int> a = {1, 2, 3, 4, 5};
    vector<int> b = {4, 5, 6, 7, 8};

    set<int> s;

    for (int x : a)
        s.insert(x);

    for (int x : b)
        s.insert(x);

    cout << "Union: ";

    for (int x : s)
        cout << x << " ";

    return 0;
}
