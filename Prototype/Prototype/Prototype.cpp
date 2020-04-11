// Prototype.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

class Tree
{
public:
	int ring_count;
	int bark_count;
	int wood_count;

	virtual int get_resources() = 0;
};

class Fruit_bearing : Tree 
{
public:
	string name_type;
	int fruit_count;

	int get_resources() 
	{
	
		int resources = ring_count + bark_count + wood_count + fruit_count;
		return resources;

	};

};

class Conifer : Tree
{
public:
	string name_type;
	int cone_count;

	int get_resources() 
	{
		int resources = ring_count + bark_count + wood_count + cone_count;
		return resources;

	};

};

class Appletree : Fruit_bearing
{




};


int main()
{
    std::cout << "Hello World!\n"; 
}
