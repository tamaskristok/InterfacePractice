#include <iostream>
#include "Person.h"
#include "Serializable.h"
#include "Comparable.h"

#include <fstream>
#include "Person.h"

using namespace std;

int main()
{
	const unsigned PEOPLE_COUNT = 4;

	Person* match = new Person(30, 180, 85);
	Person* people[PEOPLE_COUNT];

	people[0] = new Person(40, 182, 90);
	people[1] = new Person(12, 100, 50);
	people[2] = new Person(30, 180, 85);
	people[3] = new Person(40, 182, 90);
	cout << (people[0] < people[1]) << endl;
	cout << (people[0] == people[1]) << endl;
	// Lehet, hogy a HSZK-ban m�dos�tani kell az el�r�si utat, hogy legyen �r�si jog.
	return 0;
}