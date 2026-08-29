#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    map<string, int> marks = {
        {"Rahul", 85},
        {"Aman", 95},
        {"Kiran", 78},
        {"Arun", 90}
    };

    vector<pair<string, int>> v(
        marks.begin(), marks.end()
    );

    sort(v.begin(), v.end(),
        [](auto a, auto b) {
            return a.second > b.second;
        }
    );

    cout << "Students sorted by marks:\n";

    for (auto x : v) {
        cout << x.first << " -> "
             << x.second << endl;
    }

    return 0;
}
