#pragma once
#include "camerastate.h"
#include "vector3f.h"

class Camera
{
public:
	static CameraState getCameraState();
	static void setCameraState(CameraState state);
	static Vector3f getCameraPosition();
	static void setCameraPosition(Vector3f position);
	static Vector3f getCameraRotation();
	static void setCameraRotation(Vector3f rotation);
	static float getFreeCamSpeed();
	static void setFreeCamSpeed(float speed);
	static float getCameraDistance();
	static void setCameraDistance(float distance);
	static void setCameraDistanceValue(CameraDistanceLevel level, float distance);
};

enum CameraDistanceLevel {
	LOW,
	MID,
	HIGH
};


