#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
    vector<int> v = {4, 5, 2, 10, 8};

    vector<int> result(v.size(), -1);

    stack<int> s;

    for (int i = v.size() - 1; i >= 0; i--) {

        while (!s.empty() && s.top() <= v[i])
            s.pop();

        if (!s.empty())
            result[i] = s.top();

        s.push(v[i]);
    }

    cout << "Next Greater Elements: ";

    for (int x : result)
        cout << x << " ";

    return 0;
}
