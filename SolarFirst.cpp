#include "stdafx.h"
#include <iostream>

using namespace std;

class SpaceObject
{
public:
	virtual void string setName();
	virtual void string getName();
};

class  Absract_SpaceObject : SpaceObject
{
protected:
	string Name;
public:
	Absract_SpaceObject(string input)
	{
		Name = input;
	}
	void setName(string)
	{
		cout << Name << endl;
	}

};

class Plenet : Absract_SpaceObject
{
public:
	Plenet() : public Absract_SpaceObject()
	{}

	Plenet(string inputP) : Absract_SpaceObject(inputP)
	{}

	Plenet()
	{

	}
};

class Star : Absract_SpaceObject
{
	Star() : public Absract_SpaceObject()
	{}

	Star(string inputS) : Absract_SpaceObject(inputS)
	{}
};

int main ()
{
	Plenet objPlenet('Plenet');
	cout << "Name SpaceObject =";
	objPlenet.setName();

	Star objStar('Star');
	cout << "Name SpaceObject =";
	objPlenet.setName();



	system("pause");
	return 0;
}