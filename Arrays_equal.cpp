#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> a = {1, 2, 3, 4, 5};
    vector<int> b = {5, 4, 3, 2, 1};

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    if (a == b)
        cout << "Arrays are equal";
    else
        cout << "Arrays are not equal";

    return 0;
}
