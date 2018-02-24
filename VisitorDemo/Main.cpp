#include "GameObject.h"
#include "Plane.h"
#include "Alien.h"
#include "GameObjectVisitor.h"
#include "GameObjectPrinter.h"

int main(void)
{
	Plane p;
	Alien a;

	GameObjectPrinter printer;
	
	GameObject * op = nullptr; // op is nullptr
	printer.visit(op); // does nothing

	op = &p; // op points to a Plane
	printer.visit(op); // Prints "A Plane!"

	op = &a; // op points to an Alien
	printer.visit(op); // Prints "An Alien!"
	getchar();

	return 0;
}