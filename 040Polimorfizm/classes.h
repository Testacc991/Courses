#pragma once
#include <string>
#include <iostream>
using namespace std;
class Tree {
public:
	Tree() {}
	virtual void grow(){}
};
class Pine : public Tree {
public:
	
	void grow() 
	{
		cout << R"( /\ )" << endl;
		cout << R"( /\ )" << endl;
		cout << endl;
	}
};
class Oak : public Tree {
public:
	
	void grow() 
	{
		cout << R"( /\ )" << endl;
		cout << R"(/  \)" << endl;
		cout << endl;
	}
};
class Bush : public Tree {
public:
	
	void grow()
	{
		cout << R"(  /\  )" << endl;
		cout << R"(//  \\)" << endl;
		cout << endl;
	}
};