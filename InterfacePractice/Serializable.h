#pragma once
#include <iostream>

class Serializable {
public:
	virtual void deserialize(std::istream& is) = 0;
	virtual void serialize(std::ostream& os) = 0;
};