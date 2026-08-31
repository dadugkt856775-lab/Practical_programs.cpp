#include <iostream>
#include <unordered_set>
#include <algorithm>
using namespace std;

int main() {
    string s = "abcabcbb";

    unordered_set<char> st;

    int left = 0;
    int maximum = 0;

    for (int right = 0; right < s.length(); right++) {

        while (st.count(s[right])) {
            st.erase(s[left]);
            left++;
        }

        st.insert(s[right]);

        maximum = max(
            maximum,
            right - left + 1
        );
    }

    cout << "Longest length = " << maximum;

    return 0;
}
