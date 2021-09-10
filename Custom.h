#pragma once
//clase generica para representar un orden
#include <iostream>
class Custom
{
public:
	int dist = 0;
	int index;
	Custom()
	{
		dist = -1;
		index = -1;
	}
	Custom(int d, int ind) 
	{
		dist = d;
		index = ind;
	}
	bool operator >(Custom c)
	{
		return dist > c.dist;
	}

	bool operator <(Custom c)
	{
		return dist < c.dist;
	}

	void operator=(Custom c)
	{
		dist = c.dist;
		index = c.index;
	}
	bool operator == (Custom c)
	{
		return dist == c.dist;
	}
	friend std::ostream& operator<<(std::ostream& os, const Custom& c);
};

