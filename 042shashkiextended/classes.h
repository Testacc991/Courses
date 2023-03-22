#ifndef CLASSES
#define CLASSES
#pragma once
#include <string>
#include <iostream>
using namespace std;
class Board
{
	string board[8][8];
public:
	template <typename T>
	void updateboard(T &figure)
	{
		this->board[figure.starty][figure.startx] = "##";
	}
	void fillboard();
	void showboard();
};


class Figure
{
protected:
	short destx = 0;
	short desty = 0;
	void getdestination();
public:
	short startx = 0;
	short starty = 0;
	Figure();
	virtual void checkmove(){};
};


class Usual : public Figure
{
public:
	Usual() : Figure() {};
	void checkmove();
};


class  Queen : public Figure
{
public:
	Queen() : Figure() {};
	void checkmove();
};
#endif