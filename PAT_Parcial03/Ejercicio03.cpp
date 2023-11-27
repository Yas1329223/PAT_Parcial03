#include "Ejercicio03.h"
#include <unordered_map>
#include <string>
#include <map>
using namespace std;

TimeMap::TimeMap() 
{
}
void TimeMap::set(string key, string value, int timestamp)
{
    map[key].emplace_back(valor{ timestamp, value });
}

string TimeMap::get(string key, int timestamp)
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

