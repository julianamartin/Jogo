#include "pch.h"
#include "Fase1.h"


Fase1::Fase1():
Fase()
{
	this->window = window;
}
Fase1::~Fase1()
{
}
/* void Fase1::Inicializa(RenderWindow* window, float deltaTime, bool multiplayer)
{
	this->window = window;
	this->deltaTime = deltaTime;
	this->multiplayer = multiplayer;

	//DesenhaElem();
} */
void Fase1::DesenhaElem(float deltaTime)
{
	if (getWindow()->isOpen())
	{
		jog1.Atualiza(deltaTime);
		Vector2f dire��o;
		for (Plataforma& plataforma : plataformas) //DEPOIS DO ATUALIZAAAA
		{
			if (plataforma.getColis�o().Colidiu(jog1.getColis�o(), dire��o, 1.0f))
			{
				jog1.EmColis�o(dire��o);
			}
		}
	
		//window->clear(sf::Color(150, 150, 150));
		jog1.Desenha(*window);
		if (multiplayer)
		{
			jog2.Atualiza(deltaTime);
			jog2.Desenha(*window);
		}
		for (Plataforma& plataforma : plataformas)
		{
			plataforma.Desenha(*window);
		}

	}
}

void Fase1::Executar()
{

}
