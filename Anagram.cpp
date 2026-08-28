#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    string s1 = "listen";
    string s2 = "silent";

    if (s1.length() != s2.length()) {
        cout << "Not Anagram";
        return 0;
    }

    unordered_map<char, int> freq;

    for (char ch : s1)
        freq[ch]++;

    for (char ch : s2)
        freq[ch]--;

    for (auto x : freq) {
        if (x.second != 0) {
            cout << "Not Anagram";
            return 0;
        }
    }

    cout << "Anagram";

    return 0;
}
