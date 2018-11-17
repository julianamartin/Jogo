#pragma once
#include"pch.h"
#include "Entidade.h"
class Personagem : public Entidade
{
protected:
	Vector2f velocidade;
public:
	Personagem();
	~Personagem();
	//virtual void Mover(float deltaTime) = 0;
	void setVelocidade(const Vector2f vel);
};

