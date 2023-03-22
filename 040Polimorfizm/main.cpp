#include <iostream>
#include "classes.h"
int main() {
	Pine* pine;
	Bush* bush;
	Oak* oak;
	pine = new Pine();
	bush = new Bush();
	oak = new Oak();
	Tree *arr[3] = {pine,bush,oak};
	for (int i = 0; i < 3;i++)
	{
		arr[i]->grow();
	}
	for (int i = 0; i < 3; i++)
	{
		delete arr[i];
	}	
}