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
void Fase1::DesenhaElem()
{
	float deltaTime = 0.0f;
	Clock clock;
	cout << multiplayer;

	while (getWindow()->isOpen())
	{
		deltaTime = clock.restart().asSeconds();
		if (deltaTime > 1.0f / 20.0f)
			deltaTime = 1.0f / 20.0f;

		Event evnt;
		while (window->pollEvent(evnt))
		{
			switch (evnt.type)
			{
			case Event::Closed:
				window->close();
				break;
			}
		}

		jog1.Atualiza1(deltaTime);
		Vector2f direção;
		for (Plataforma& plataforma : plataformas) //DEPOIS DO ATUALIZAAAA
		{
			if (plataforma.getColisão().Colidiu(jog1.getColisão(), direção, 1.0f))
			{
				jog1.EmColisão(direção);
			}
			if (plataforma.getColisão().Colidiu(jog2.getColisão(), direção, 1.0f))
			{
				jog2.EmColisão(direção);
			}
		}
	
		window->clear(Color(150, 150, 150));
		jog1.Desenha(*window);
		if (multiplayer)
		{
			jog2.Atualiza2(deltaTime);
			jog2.Desenha(*window);
		}
		for (Plataforma& plataforma : plataformas)
		{
			plataforma.Desenha(*window);
		}
		window->display();

	}
}

void Fase1::Executar()
{

}
