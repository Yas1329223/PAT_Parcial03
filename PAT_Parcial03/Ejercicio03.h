#pragma once
#include <unordered_map>
#include <map>
#include <string>

using std::string;

class TimeMap{
private:
    std::unordered_map<std::string, std::map<int, std::string>> data;

{
public:
	TimeMap();

	void set(string key, string value, int timestamp);

	string get(string key, int timestamp);
};

