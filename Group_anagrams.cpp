#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    vector<string> words = {
        "eat", "tea", "tan",
        "ate", "nat", "bat"
    };

    map<string, vector<string>> groups;

    for (string word : words) {
        string key = word;

        sort(key.begin(), key.end());

        groups[key].push_back(word);
    }

    cout << "Anagram Groups:\n";

    for (auto group : groups) {

        cout << "[ ";

        for (string word : group.second)
            cout << word << " ";

        cout << "]\n";
    }

    return 0;
}
