// Heaps.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <utility>
#include "Custom.h"
#include "S_heap.h"
#include "U_heap.h"

int main()
{
    U_heap<Custom> heap;
    S_heap<Custom> hep;
    std::vector<int> indices({ 8, 5, 2, 9, 5, 6, 3, 5 });
    for (int i = 0; i < indices.size(); i++)
    {
        heap.push(Custom(indices[i], i));
        hep.push(Custom(indices[i], i));
    }
    heap.sort();
    hep.sort();
}
