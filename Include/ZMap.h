#pragma once
#include <tuple>
#include <cstring>
#include <iostream>

namespace Zyniac
{
    template<class O, int N>
    using MapArray = std::pair<const char*, O>[N];

    template<class O>
    using MapReturn = O const *;

    template<class O, int N>
    MapReturn<O> map_get(const MapArray<O, N>& array, const char* key)
    {
        for(int i = 0; i < N; i++)
        {
            if(strcmp(array[i].first, key) == 0)
            {
                return &array[i].second;
            }
        }
        return nullptr;
    }

}