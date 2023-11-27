#include "Ejercicio03.h"
#include <unordered_map>
#include <string>
#include <map>
using namespace std;

TimeMap::TimeMap() 
{
  void TimeMap::set(std::string key, std::string value, int timestamp) {
    map[key].push_back(Valor{timestamp, value});
}

void TimeMap::set(string key, string value, int timestamp)
{
  if (map.find(key) == map.end())
        return "";

    const std::vector<Valor>& valores = map[key];

    int inicio = 0, fin = valores.size() - 1;

    while (inicio <= fin) {
        int medio = inicio + (fin - inicio) / 2;

        if (valores[medio].timestamp == timestamp)
            return valores[medio].value;
        else if (valores[medio].timestamp < timestamp)
            inicio = medio + 1;
        else
            fin = medio - 1;
    }

    if (fin >= 0)
        return valores[fin].value;
    else
        return "";
}

