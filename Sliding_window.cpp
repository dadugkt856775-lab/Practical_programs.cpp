#include <iostream>
#include <vector>
#include <deque>
using namespace std;

int main() {
    vector<int> arr = {1, 3, -1, -3, 5, 3, 6, 7};

    int k = 3;

    deque<int> dq;

    cout << "Window maximums: ";

    for (int i = 0; i < arr.size(); i++) {

        // Remove elements outside the window
        while (!dq.empty() && dq.front() <= i - k)
            dq.pop_front();

        // Remove smaller elements
        while (!dq.empty() && arr[dq.back()] <= arr[i])
            dq.pop_back();

        dq.push_back(i);

        // Print maximum
        if (i >= k - 1)
            cout << arr[dq.front()] << " ";
    }

    return 0;
}
