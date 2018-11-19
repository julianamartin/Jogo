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

	//fase1.Inicializa(&window,deltaTime, multiplayer);
	//fase2.Inicializa(&window, deltaTime, multiplayer);

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
				case Keyboard::F3:
				{
					if (recuperaFase() == 1)
					{
						fase1 = new Fase1;
						fase1->Inicializa(&window, deltaTime, multiplayer);
						fase1->recuperarJogada();
						fase1->ExecutarRec(1);
						delete (fase1);
						break;
					}
					if (recuperaFase() == 2)
					{
						fase2 = new Fase2;
						fase2->Inicializa(&window, deltaTime, multiplayer);
						fase2->recuperarJogada();
						fase2->ExecutarRec(2);
						delete (fase2);
						break;
					}
					break;
				}
					
				case Keyboard::Return:
					switch (menu.getPressedItem())
					{
					case 0:
						if (multiplayer == false)
							multiplayer = true;
						else
							multiplayer = false;
						break;

					case 1:
						fase1 = new Fase1;
						fase1->Inicializa(&window, deltaTime, multiplayer);
						fase1->Executar();
						window.display();
						delete (fase1);
						break;

					case 2:
						fase2 = new Fase2;
						fase2->Inicializa(&window, deltaTime, multiplayer);
						fase2->Executar();
						window.display();
						delete (fase2);
						break;

					case 3:
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

int Jogo::recuperaFase()
{
	ifstream recuperacaoElementos("salvarjogada.txt", ios::in);
	if (!recuperacaoElementos)
	{
		cout << "Arquivo não pode ser aberto";
		return -1;
	}
	else
	{
		int fase;
		recuperacaoElementos >> fase;
		return fase;
	}
}
