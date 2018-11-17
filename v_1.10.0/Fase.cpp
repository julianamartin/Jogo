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
	pause = false;
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
	jog1.aTempo()->Inicializa1();
	jog1.aDinheiro()->Inicializa1();
	//jog1.aEnergia().Inicializa1();
	if (multiplayer)
	{
		jog2Texture.loadFromFile("tux_from_linux.png");
		jog2.Inicializa(&jog2Texture, Vector2u(3, 9), 0.3f, 150.0f, 210.0f);
	}

}

void Fase::verificaColisao()
{
	//plataforma
	plat.verificaColisao(&jog1);
	if (multiplayer)
		plat.verificaColisao(&jog2);

	//inimigos e obst�culos (entidades)
	listaEnt.testaColisao(&jog1);
	if (multiplayer)
		listaEnt.testaColisao(&jog2);
}
bool Fase::verificaColisaoPorta()
{
	Vector2f dire��o;
	if (multiplayer)
	{
		if (porta.getColis�o().Colidiu(jog1.getColis�o(), dire��o, 1.0f) && porta.getColis�o().Colidiu(jog2.getColis�o(), dire��o, 1.0f))
			return true;
	}
	else
	{
		if (porta.getColis�o().Colidiu(jog1.getColis�o(), dire��o, 1.0f))
		{
			cout << "tchau";
			jog1.EmColis�o(dire��o);
			return true;
		}
			
	}
		
	return false;
}
void Fase::destroiElem()
{
	listaEnt.limpa();
}
