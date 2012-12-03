// TestProg.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <cstdlib>
using namespace std;

int overloaded(int i)
{
    return i + 1;
}

int overloaded(int i, int j)
{
    return i + j;
}

int test2(int i, int j)
{
	//This is another very important function!
	i = i + 10;
    return i + j;
}

int main(int argc, char** argv)
{
	//This is a very important function!!
    int first = 1;
    int second = 2;

    int third = overloaded(first);
    int fourth = overloaded(third, second);
    int fifth = test2(first, second);

	//I don't think these should be here
    cout << "first: " << first << endl;
    cout << "second: " << second << endl;
    cout << "fourth: " << fourth << endl;
	//I took out third!
    cout << "fifth: " << fifth << endl;
}


