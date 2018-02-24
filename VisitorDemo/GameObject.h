#pragma once

// Predeclaration is fine because it's only referenced
class GameObjectVisitor;

// Abstract class, cannot be instantiated, only inherited
class GameObject
{
public:
	virtual ~GameObject(void) {}

	virtual void accept(GameObjectVisitor & visitor) = 0;
};