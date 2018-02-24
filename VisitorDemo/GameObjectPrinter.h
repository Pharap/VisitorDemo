#pragma once

#include "GameObjectVisitor.h"
#include "Plane.h"
#include "Alien.h"

#include <iostream>

class GameObjectPrinter : public GameObjectVisitor
{
public:
	// Needed to bring void visit(GameObject * object) into scope
	// See https://isocpp.org/wiki/faq/strange-inheritance#overload-derived
	using GameObjectVisitor::visit;

	void visit(Plane & plane) override
	{
		std::cout << "A Plane!\n";
	}

	void visit(Alien & alien) override
	{
		std::cout << "An Alien!\n";
	}
};
