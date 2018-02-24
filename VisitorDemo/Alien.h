#pragma once

#include "GameObject.h"
#include "GameObjectVisitor.h"

class Alien : public GameObject
{
public:
	void accept(GameObjectVisitor & visitor) override
	{
		visitor.visit(*this);
	}
};