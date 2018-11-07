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
	menu.Inicializa(static_cast <float> (window.getSize().x), static_cast <float> (window.getSize().y));
	//RenderWindow window2 (VideoMode(1920, 1080), "Menu de Inimigos da DP", Style::Close);

	//menu.Inicializa(window2.getSize().x, window2.getSize().y);
	float deltaTime = 0.0f;
	Clock clock;

	fase1.Inicializa(&window,deltaTime, multiplayer);


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
			case Event::KeyReleased:
				switch (evnt.key.code)
				{
				case Keyboard::Up :
					menu.MoveUp();
					break;

				case Keyboard::Down:
					menu.MoveDown();
					break;
		
				case Keyboard::Return:
					switch (menu.getPressedItem())
					{
					case 0:
						fase1.DesenhaElem();
						window.display();

					case 1:
						cout << "oi";
					case 2:
						window.close();

					}
				
				}
			}

		}

		window.clear(Color(150, 150, 150));
		menu.Desenha(window);
		window.display();
	}
	
}
