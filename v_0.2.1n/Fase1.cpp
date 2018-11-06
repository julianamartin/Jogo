#include "pch.h"
#include "Fase1.h"


Fase1::Fase1():
Fase(window, deltaTime, multiplayer)
{
	this->window = window;
}
Fase1::~Fase1()
{
}
void Fase1::Inicializa()
{
	DesenhaElem();
}
void Fase1::DesenhaElem()
{
	vector<Plataforma> plataformas;
	plataformas.push_back(Plataforma(nullptr, Vector2f(400.0f, 200.0f), Vector2f(500.0f, 200.0f)));
	plataformas.push_back(Plataforma(nullptr, Vector2f(400.0f, 200.0f), Vector2f(500.0f, 0.0f)));
	plataformas.push_back(Plataforma(nullptr, Vector2f(1000.0f, 200.0f), Vector2f(500.0f, 500.0f)));

	while (getWindow()->isOpen())
	{
		jog1.Atualiza(deltaTime);
		Vector2f direção;
		for (Plataforma& plataforma : plataformas) //DEPOIS DO ATUALIZAAAA
		{
			if (plataforma.getColisão().Colidiu(jog1.getColisão(), direção, 1.0f))
			{
				jog1.EmColisão(direção);
			}
		}
	
		window->clear(sf::Color(150, 150, 150));
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

		window->display();
	}
}
