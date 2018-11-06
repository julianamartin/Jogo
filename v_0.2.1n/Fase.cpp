#include "pch.h"
#include "Fase.h"

Fase::Fase(RenderWindow* window, float deltaTime, bool multiplayer):
jog1(),
jog2()
{
	this-> window = window;
	this->deltaTime = deltaTime;
	this->multiplayer = multiplayer;
	jog1Texture.loadFromFile("kit_from_firefox.png");
	jog1.Inicializa(&jog1Texture, Vector2u(3, 9), 0.3f, 100.0f, 200.0f);
	if (multiplayer)
	{
		jog2Texture.loadFromFile("tux_from_linux.png");
		jog2.Inicializa(&jog2Texture, Vector2u(3, 9), 0.3f, 100.0f, 200.0f);
	}

}


Fase::~Fase()
{
}
