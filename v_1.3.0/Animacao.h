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
	Animacao();
	~Animacao();
	void Inicializa(Texture* texture, Vector2u imageCount, float switchTime);
	void Atualiza(int row, float deltaTime, bool faceRight);
};

