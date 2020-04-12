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

	Fruit_bearing( string name_type, string fruit_status ) {};

	void print_type()
	{

		cout << name_type;

	}

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

	Conifer( string name_type, string fruit_status ) {};

	int get_resources() 
	{
		int resources = ring_count + bark_count + wood_count + cone_count;
		return resources;

	};

};


int main()
{

	Fruit_bearing Appletree_fresh( "apple", "fresh" );

	Fruit_bearing Appletree_rotten( "apple", "rotten");

	Fruit_bearing Appletree_freshrotten( "apple", "fresh & rotten" );

	Appletree_fresh.print_type();

	Appletree_rotten.print_type();

	Appletree_freshrotten.print_type();


	return 0;

}
