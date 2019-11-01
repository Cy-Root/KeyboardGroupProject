// KeyboardProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class item
{
	public:
	string name;
	int price;

	// Constructor
	item(string y, int z) {
		name = y;
		price = z;
	}

};

class shop
{
public:
	int ar[5];
};

int main()
{

	item mouse("Mouse", 20);
}

