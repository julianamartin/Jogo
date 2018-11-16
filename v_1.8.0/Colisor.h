#pragma once
#include "pch.h"

class Colisor
{
private:
	RectangleShape& obj;
public:
	Colisor(RectangleShape& obj);
	~Colisor();

	void Mover(float dx, float dy);
	bool Colidiu(Colisor outroObj, Vector2f& direção, float desloc);
	Vector2f getPosição();
	Vector2f getMetade();
};

