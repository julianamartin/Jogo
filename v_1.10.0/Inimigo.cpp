#include "pch.h"
#include "Inimigo.h"


Inimigo::Inimigo()
{
	moveu = 0.0f;
	amplitude = 0.0f;
	esquerda = false;
}


Inimigo::~Inimigo()
{
}

void Inimigo::Mover(float deltaTime)
{
	if (esquerda == true)
	{
		velocidade.x = -abs(velocidade.x);

		if (moveu <= 0.0f)
			esquerda = false;
	}
	else
	{
		if (moveu <= amplitude) // ajustar a amplitude 
			velocidade.x = abs(velocidade.x);
		else
			esquerda = true;
	}

	float dist = deltaTime * velocidade.x;

	objP.move(dist, 0.0f);

	moveu += dist;
}

void Inimigo::setAmplitude(const float amplit)
{
	amplitude = amplit;
}