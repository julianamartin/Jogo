#include "pch.h"
#include "Fase.h"

Fase::Fase():
jog1(),
jog2()
{
	n_dp = 0;
	n_prova = 0;
	n_conta = 0;
	n_alfajor = 0;
	n_cerveja = 0;
	n_bebed = 0;
}

Fase::~Fase()
{
	destroiElem();
}
void Fase::Inicializa(RenderWindow* window, float deltaTime, bool multiplayer)
{
	this->window = window;
	this->deltaTime = deltaTime;
	this->multiplayer = multiplayer;
	jog1Texture.loadFromFile("kit_from_firefox.png");
	jog1.Inicializa(&jog1Texture, Vector2u(3, 9), 0.3f, 150.0f, 210.0f);
	if (multiplayer)
	{
		jog2Texture.loadFromFile("tux_from_linux.png");
		jog2.Inicializa(&jog2Texture, Vector2u(3, 9), 0.3f, 100.0f, 200.0f);
	}

}

void Fase::verificaColisao()
{
	//plataforma
	plat.verificaColisao(&jog1);
	if (multiplayer)
		plat.verificaColisao(&jog2);

	//inimigos e obstáculos (entidades)
	listaEnt.testaColisao(&jog1);
	if (multiplayer)
		listaEnt.testaColisao(&jog2);
}

void Fase::destroiElem()
{
	listaEnt.limpa();
}