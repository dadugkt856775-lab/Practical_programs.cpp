#include <iostream>
#include <list>
#include <unordered_map>
using namespace std;

class LRUCache {

    int capacity;

    list<pair<int, int>> cache;

    unordered_map<int, list<pair<int, int>>::iterator> mp;

public:

    LRUCache(int cap) {
        capacity = cap;
    }

    void put(int key, int value) {

        if (mp.find(key) != mp.end()) {
            cache.erase(mp[key]);
        }

        cache.push_front({key, value});
        mp[key] = cache.begin();

        if (cache.size() > capacity) {

            auto last = cache.back();

            mp.erase(last.first);

            cache.pop_back();
        }
    }

    int get(int key) {

        if (mp.find(key) == mp.end())
            return -1;

        auto it = mp[key];

        int value = it->second;

        cache.erase(it);

        cache.push_front({key, value});

        mp[key] = cache.begin();

        return value;
    }

    void display() {

        cout << "Cache: ";

        for (auto x : cache)
            cout << "(" << x.first
                 << "," << x.second << ") ";

        cout << endl;
    }
};

int main() {

    LRUCache cache(3);

    cache.put(1, 100);
    cache.put(2, 200);
    cache.put(3, 300);

    cache.display();

    cout << "Get key 1: "
         << cache.get(1) << endl;

    cache.display();

    cache.put(4, 400);

    cache.display();

    cout << "Get key 2: "
         << cache.get(2) << endl;

    return 0;
}
