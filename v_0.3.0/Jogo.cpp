#include "pch.h"
#include "Jogo.h"

Jogo::Jogo()
{
	multiplayer = false;
}
Jogo::~Jogo()
{
}
void Jogo::Executar()
{
	RenderWindow window (VideoMode(1920, 1080), "Inimigos da DP", Style::Close);
	//RenderWindow window2 (VideoMode(1920, 1080), "Menu de Inimigos da DP", Style::Close);

	//menu.Inicializa(window2.getSize().x, window2.getSize().y);
	float deltaTime = 0.0f;
	Clock clock;

	fase1.Inicializa(&window,deltaTime, multiplayer);

	/*while (window2.isOpen())
	{
		Event ev;
		while (window.pollEvent(ev))
		{
			switch (ev.type)
			{
			case Event::Closed:
				window.close();
				break;

			}
		}

		window.clear(Color(150, 150, 150));
		menu.Desenha(window2);
		window.display();
	}*/

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

		window.clear(Color(150, 150, 150));
		fase1.DesenhaElem(deltaTime);
		window.display();
	}
	
}
