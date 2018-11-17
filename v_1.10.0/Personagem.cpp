#include "pch.h"
#include "Personagem.h"


Personagem::Personagem()
{
	velocidade = Vector2f(0.0f, 0.0f);
}


Personagem::~Personagem()
{
}

/* void Personagem::Inicializa()
{

} */

void Personagem::setVelocidade(const Vector2f vel)
{
	velocidade = vel;
}