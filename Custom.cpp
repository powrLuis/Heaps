#include "Custom.h"

std::ostream& operator<<(std::ostream& os, const Custom& c)
{
	return os << "(" << c.dist << ", " << c.index << ")";
}
