#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 2, 5};
    int target = 5;

    cout << "Subarrays:\n";

    for (int i = 0; i < v.size(); i++) {

        int sum = 0;

        for (int j = i; j < v.size(); j++) {

            sum += v[j];

            if (sum == target) {

                cout << "[ ";

                for (int k = i; k <= j; k++)
                    cout << v[k] << " ";

                cout << "]\n";
            }
        }
    }

    return 0;
}
