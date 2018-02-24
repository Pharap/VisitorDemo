#pragma once

// Need to know GameObject has an 'accept' method
#include "GameObject.h"

// Predeclaration is fine because they're only referenced
class Plane;
class Alien;

class GameObjectVisitor
{
public:
	virtual ~GameObjectVisitor(void) {}

	void visit(GameObject * object)
	{
		if (object != nullptr)
			object->accept(*this);
	}

	virtual void visit(Plane & plane) {};
	virtual void visit(Alien & alien) {};
};