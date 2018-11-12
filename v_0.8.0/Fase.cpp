#include "pch.h"
#include "Fase.h"

Fase::Fase():
jog1(),
jog2()
{

}


Fase::~Fase()
{
}
void Fase::Inicializa(RenderWindow* window, float deltaTime, bool multiplayer)
{
	this->window = window;
	this->deltaTime = deltaTime;
	this->multiplayer = multiplayer;
	jog1Texture.loadFromFile("kit_from_firefox.png");
	jog1.Inicializa(&jog1Texture, Vector2u(3, 9), 0.3f, 100.0f, 200.0f);
	if (multiplayer)
	{
		jog2Texture.loadFromFile("tux_from_linux.png");
		jog2.Inicializa(&jog2Texture, Vector2u(3, 9), 0.3f, 100.0f, 200.0f);
	}
	
	plataformas.push_back(Plataforma(nullptr, Vector2f(800.0f, 200.0f), Vector2f(400.0f, 280.0f)));
	plataformas.push_back(Plataforma(nullptr, Vector2f(800.0f, 200.0f), Vector2f(1520.0f, 630.0f)));
	plataformas.push_back(Plataforma(nullptr, Vector2f(1920.0f, 200.0f), Vector2f(960.0f, 980.0f)));

}