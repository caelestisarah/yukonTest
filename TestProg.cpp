// TestProg.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <cstdlib>
using namespace std;

int overloaded(int i)
{
	//I am modifying every single function
    return i + 1;
	//in multiple places!
}

int overloaded(int i, int j)
{
	i = 0;
	i = 10;
	j = i;
	j++;
    return i + j;
}

int test2(int i, int j)
{
	j*=41;
	//This is another very important function!
	i = i + 10;
    return i + j;
}

int main(int argc, char** argv)
{
	//This is a very important function!!
    int first = 1;
    int second = 2;
	//I'm doing some more changes now
	int newInt = test2(1,2);
    int third = overloaded(first);
    int fourth = overloaded(third, second);
    int fifth = test2(first, second);
	int somenewdude = 328954329;

	//I don't think these should be here
    cout << "first: " << first << endl;
    cout << "second: " << second << endl;
    cout << "fourth: " << fourth << endl;
	//I took out third!
    cout << "fifth: " << fifth << endl;
}


