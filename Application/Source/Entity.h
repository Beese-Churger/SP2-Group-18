#ifndef ENTITY_H
#define ENTITY_H

#include "hitbox.h"
#include "Vector3.h"

class Entity
{
protected:
	std::string name;
	std::string type;
	Vector3 entityPos;
	Vector3 directionVector;
	Hitbox hitbox;
	float enityRadius;
	float entityLookDirection;
	float velocity;
	bool render;

public:
	Entity();
	~Entity();

	std::string getName();
	std::string getType();
	Vector3 getPosition();
	float getLookDirection();
	Hitbox getHitbox();
	bool getRender();
	virtual void move(Vector3, float);
	void updatePosition(Vector3 newpos);
};
#endif