#include "Person.h"

int Person::getAge()
{
	return age;
}

double Person::getHeight()
{
	return height;
}

double Person::getWeight()
{
	return weight;
}

bool Person::operator<(const Person& other)
{
	return this->age < other.age;
}

bool Person::operator==(const Person& other)
{
	return false;
}

void Person::setAge(unsigned char age)
{
	this->age = age;
}

bool Person::setHeight(double height)
{
	if (height > 0) {
		this->height = height;
		return true;
	}
	return false;
}

bool Person::setWeight(double weight)
{
	if (weight > 0) {
		this->weight = weight;
		return true;
	}
	return false;
}
