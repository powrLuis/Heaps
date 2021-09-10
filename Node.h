#pragma once
template<class T> struct node
{
	T value;
	int idx;
	node(T v, int i)
	{
		value = v;
		idx = i;
	}
	bool operator >(node n)
	{
		return value == n.value ? idx > n.idx:value > n.value;
	}
	bool operator <(node n)
	{
		return value == n.value ? idx < n.idx : value < n.value;
	}
};