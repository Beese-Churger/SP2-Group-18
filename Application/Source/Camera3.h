#ifndef CAMERA_3_H
#define CAMERA_3_H

#include "Camera.h"
#include "Vector3.h"
#include "Application.h"
#include "Mtx44.h"
#include "Hitbox.h"
#include <vector>


class Camera3 : public Camera
{
public:
	Vector3 defaultPosition;
	Vector3 defaultTarget;
	Vector3 defaultUp;
	
	Camera3();
	~Camera3();
	virtual void Init(const Vector3& pos, const Vector3& target, const Vector3& up);
	void Update(double dt, std::vector<Hitbox> hitbox);
	void PlayerCollision(std::vector<Hitbox>);
	bool PlayerInRange(std::vector<Hitbox>, float index);
	Vector3 CircleRectcollision(float cx, float cy, float radius, float rx, float ry, float rw, float rh);
	bool CollisionAABB(float r1x, float r1y, float r1z, float r1w, float r1h, float r1d, float r2x, float r2y, float r2z, float r2w, float r2h, float r2d);
	bool isInRange(float cx, float cy, float radius, float rx, float ry, float rw, float rh);

	virtual void Reset();

private:
	float lastX, lastY;
	float pitch, totalPitch;
	float cameraRadius, cameraHeight;
	float jumpTime;
	float velocityY;
	bool firstMouse;
	bool isJumping;
	void mouseLook();
	
};

#endif