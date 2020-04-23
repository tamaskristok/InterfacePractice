#pragma once
#include "Comparable.h"
#include "Serializable.h"

class Person : public Comparable, Serializable
{
private:
	unsigned char age;
	double height;
	double weight;
public:
	Person(unsigned char age, double height, double weight); 	
	Person(){};
	void deserialize(std::istream& is){ age = 0;}
	int getAge();
	double getHeight();
	double getWeight();

	bool operator < (const Comparable& other) const ;
	bool operator == (const Comparable& other) const;


	void serialize(std::ostream& os){age = 0; }

	void setAge(unsigned char age);
	bool setHeight(double height);
	bool setWeight(double weight);
};

