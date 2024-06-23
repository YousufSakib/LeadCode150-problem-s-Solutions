#include <bits/stdc++.h>
using namespace std;
class RandomizedSet
{
private:
    std::unordered_set<int> mySet;

public:
    RandomizedSet() {}

    bool insert(int val)
    {
        if (mySet.find(val) != mySet.end())
            return false;
        mySet.insert(val);
        return true;
    }

    bool remove(int val)
    {
        if (mySet.find(val) == mySet.end())
            return false;
        mySet.erase(val);
        return true;
    }

    int getRandom()
    {
        int randomIndex = std::rand() % mySet.size();
        auto it = mySet.begin();
        std::advance(it, randomIndex);
        return *it;
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */