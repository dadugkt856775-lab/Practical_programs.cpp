#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    string s = "programming";
    unordered_set<char> seen;

    string result = "";

    for (char ch : s) {
        if (!seen.count(ch)) {
            seen.insert(ch);
            result += ch;
        }
    }

    cout << "Original: " << s << endl;
    cout << "After removing duplicates: " << result;

    return 0;
}
