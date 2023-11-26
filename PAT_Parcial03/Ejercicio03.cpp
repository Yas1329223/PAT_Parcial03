#include "Ejercicio03.h"

TimeMap::TimeMap()
{
	void TimeMap::set(std::string key, std::string value, int timestamp) {
	data[key][timestamp] = value;
}

string TimeMap::get(string key, int timestamp)
{
	if (data.find(key) != data.end())
	{
		auto it = data[key].upper_bound(timestamp);
		if (it != data[key].begin()) 
		{
		    --it;
		    return it->second;
		}
	}
	return "";
}
