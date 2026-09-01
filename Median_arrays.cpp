#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> a = {1, 3, 5, 7};
    vector<int> b = {2, 4, 6, 8};

    vector<int> merged;

    merge(
        a.begin(), a.end(),
        b.begin(), b.end(),
        back_inserter(merged)
    );

    int n = merged.size();

    double median;

    if (n % 2 == 0) {
        median = (merged[n / 2 - 1]
                + merged[n / 2]) / 2.0;
    } else {
        median = merged[n / 2];
    }

    cout << "Median = " << median;

    return 0;
}
