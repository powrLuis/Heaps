#pragma once
#include <utility>
#include <vector>
#include "Node.h"
//U_heap<int, int> heap();

//Heap inestable
template <class T> class U_heap
{
	std::vector<node<T>> arr;
	int size;
public:
	U_heap();
	void push(T item);
	T top();
	void sort();
};

template<class T>
inline U_heap<T>::U_heap()
{
	size = 0;
}

template<class T>
inline void U_heap<T>::push(T item)
{
	if (size==0)
	{
		arr.push_back(node<T> (item,size));
		size = 1;
	}
	else
	{
		arr.push_back(node<T>(item,size));
		int last = size;
		while (last>0)
		{
			int up = (last - 1) / 2;
			if (arr[up].value>arr[last].value)
			{
				break;
			}
			else
			{
				auto temp = arr[up];
				arr[up] = arr[last];
				arr[last] = temp;
				last = up;
			}
		}
		size++;
	}
}

template<class T>
inline T U_heap<T>::top()
{
	T result = arr[0].value;
	arr[0] = arr[(size - 1)];
	int p = 0, left = 2 * p + 1, right = 2 * p + 2;
	size--;
	while (left<size||right<size)
	{
		if (arr[p].value<arr[left].value)
		{
			if (arr[left].value<arr[right].value)
			{
				auto temp = arr[p];
				arr[p] = arr[right];
				arr[right] = temp;
				p = right;
			}
			else
			{
				auto temp = arr[p];
				arr[p] = arr[left];
				arr[left] = temp;
				p = left;
			}
		}
		else
		{
			if (arr[p].value < arr[right].value)
			{
				auto temp = arr[p];
				arr[p] = arr[right];
				arr[right] = temp;
				p = right;
			}
			else
			{
				break;
			}
		}
		left = 2 * p + 1, right = 2 * p + 2;
	}
	return result;
}

template<class T>
inline void U_heap<T>::sort()
{
	int q = size - 1;
	while (q>0)
	{
		arr[q].value = top();
		q--;
	}
}
