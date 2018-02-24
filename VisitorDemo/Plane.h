#pragma once

#include "GameObject.h"
#include "GameObjectVisitor.h"

class Plane : public GameObject
{
public:
	void accept(GameObjectVisitor & visitor) override
	{
		visitor.visit(*this);
	}
};