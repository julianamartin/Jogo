#include "pch.h"
#include "Jogo.h"

Jogo::Jogo()
{
	multiplayer = true;
}
Jogo::~Jogo()
{
}
void Jogo::Executar()
{
	RenderWindow window (VideoMode(1920, 1080), "Inimigos da DP", Style::Close);
	float deltaTime = 0.0f;
	Clock clock;

	fase1.Inicializa();
	while (window.isOpen())
	{
		deltaTime = clock.restart().asSeconds();
		if (deltaTime > 1.0f / 20.0f)
			deltaTime = 1.0f / 20.0f;

		Event evnt;
		while (window.pollEvent(evnt))
		{
			switch (evnt.type)
			{
			case Event::Closed:
				window.close();
				break;

			}
		}

		window.clear(sf::Color(150, 150, 150));
		window.display();
	}
	
}
