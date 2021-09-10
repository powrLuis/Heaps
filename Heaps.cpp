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
    
    std::cout << "Heap no estable antes de ordenar"<<std::endl;
    heap.print();
    std::cout << "Heap no estable despues de ordenar" << std::endl;
    heap.sort();
    heap.print();

    std::cout << "Heap estable antes de ordenar" << std::endl;
    hep.print();
    std::cout << "Heap estable despues de ordenar" << std::endl;
    hep.sort();
    hep.print();
}
