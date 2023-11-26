#include "Ejercicio03.h"
#include <string>
#include <unordered_map>
#include <vector>
#include <map>

using namespace std;

class TimeMap {
private:
    unordered_map<string, map<int, string>> timeMap;

public:
    TimeMap()
    {
    }

    void set(string key, string value, int timestamp)
    {
        timeMap[key][timestamp] = value;
    }

    string get(string key, int timestamp)
    {
        auto keyIter = timeMap.find(key);
        if (keyIter == timeMap.end())
        {
            return "";
        }

        auto timestampIter = keyIter->second.lower_bound(timestamp);
        if (timestampIter == keyIter->second.begin())
        {
            return "";
        }

        timestampIter--;
        return timestampIter->second;
    }
};
