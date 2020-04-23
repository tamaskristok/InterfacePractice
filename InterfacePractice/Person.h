#pragma once
#include "Comparable.h"
#include "Serializable.h"

class Person : public Comparable, public Serializable
{
private:
	unsigned char age;
	double height;
	double weight;
public:
	void deserialize(std::istream& is);
	int getAge();
	double getHeight();
	double getWeight();

	bool operator<(const Person& other);
	bool operator==(const Person& other);

	Person(unsigned char age, double height, double weight) : age(age), height(height), weight(weight) {}

	void serialize(std::ostream& os);

	void setAge(unsigned char age);
	bool setHeight(double height);
	bool setWeight(double weight);
};

