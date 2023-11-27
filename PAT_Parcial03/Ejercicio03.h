#pragma once

#include <string>
#include <vector>
#include <unordered_map>

struct Valor {
    int timestamp;
    std::string value;
};


class TimeMap
{
private:
    std::unordered_map<std::string, std::vector<Valor>> map;
public:
	TimeMap();

	void set(string key, string value, int timestamp);

	string get(string key, int timestamp);
};

