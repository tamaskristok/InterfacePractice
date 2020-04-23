#include "Person.h"

Person::Person(unsigned char age, double height, double weight)
{
  age = age;
  height=height;
  weight=weight; 

}
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

 bool Person::operator<(const Comparable& other)const
{
	const Person *otherperson = dynamic_cast<const Person*> (&other);
	return this->age < otherperson->age;

}

 bool Person::operator==(const Comparable& other)const 
{

	const Person *otherperson = dynamic_cast<const Person*> (&other);
	return this->age == otherperson->age && this->height == otherperson->height && this->weight == otherperson->weight ;
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
