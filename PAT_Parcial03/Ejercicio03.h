#pragma once

#include <string>
#include <vector>
#include <unordered_map>

using namespace std;
using std::string;
class TimeMap
{
private:
	struct Valor {
	    int timestamp;
	    string value;
	};
    	unordered_map<string, std::vector<Valor>> map;
public:
	TimeMap();

	void set(string key, string value, int timestamp);

	string get(string key, int timestamp);
};

