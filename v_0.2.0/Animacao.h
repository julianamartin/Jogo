#pragma once
#include"pch.h"

class Animacao
{
private:
	Vector2u imageCount;
	Vector2u currentImage;
	float totalTime;
	float switchTime;
public:
	IntRect uvRect;

public:
	Animacao(Texture* texture, Vector2u imageCount, float switchTime);
	~Animacao();
	void Atualiza(int row, float deltaTime, bool faceRight);
};

