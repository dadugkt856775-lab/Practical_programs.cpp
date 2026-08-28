#include <iostream>
#include <map>
#include <sstream>
using namespace std;

int main() {
    string sentence =
        "cpp is powerful cpp is fast cpp is popular";

    map<string, int> freq;

    string word;
    stringstream ss(sentence);

    while (ss >> word) {
        freq[word]++;
    }

    cout << "Word frequencies:\n";

    for (auto x : freq) {
        cout << x.first << " -> "
             << x.second << endl;
    }

    return 0;
}
