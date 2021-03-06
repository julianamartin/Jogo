#include "pch.h"
#include <time.h>
#include "Jogador.h"
#include "Plataforma.h"
#include <vector>

//static const float VIEW_HEIGHT = 512.0f;

//void ResizeView(const RenderWindow& window, View& view);

int main()
{
	RenderWindow window(VideoMode(1920, 1080), "Inimigos da DP", Style::Close | Style::Resize);
	//View view(sf::Vector2f(0.0f, 0.0f), Vector2f(VIEW_HEIGHT, VIEW_HEIGHT));

	Texture playerTexture;
	Texture plat1Texture;
	playerTexture.loadFromFile("kit_from_firefox.png");
	plat1Texture.loadFromFile("plataforma_teste.png");

	Jogador player (&playerTexture, Vector2u(3, 9), 0.3f, 100.0f, 200.0f);

	vector<Plataforma> plataformas;
	plataformas.push_back( Plataforma(nullptr, Vector2f(400.0f, 200.0f), Vector2f(500.0f, 200.0f)));
	plataformas.push_back( Plataforma(nullptr, Vector2f(400.0f, 200.0f), Vector2f(500.0f, 0.0f)));
	plataformas.push_back( Plataforma(nullptr, Vector2f(1000.0f, 200.0f), Vector2f(500.0f, 500.0f)));
	//Plataforma plat1(&plat1Texture, Vector2f(1000.0f, 900.0f), Vector2f(500.0f, 700.0f));
	/*Plataforma plat2(nullptr, sf::Vector2f(400.0f, 200.0f), sf::Vector2f(500.0f, 0.0f));
	Plataforma plat3(nullptr, sf::Vector2f(1000.0f, 200.0f), sf::Vector2f(500.0f, 500.0f));*/

	

	float deltaTime = 0.0f;
	Clock clock;

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
			case Event::Closed :
				window.close();
				break;

			case Event::Resized :
				printf("Altura: %i\n Largura: %i\n", evnt.size.height, evnt.size.width);
				//ResizeView(window, view);
				break;

			case Event::TextEntered :
				if (evnt.text.unicode < 128)
					printf("%c", evnt.text.unicode);
			}
		}

		player.Atualiza(deltaTime);

		Vector2f direção;
		for (Plataforma& plataforma : plataformas) //DEPOIS DO ATUALIZAAAA
		{
			if (plataforma.getColisão().Colidiu(player.getColisão(), direção, 1.0f))
			{
				player.EmColisão(direção);
			}
		}
		//plat1.getColisão().Colidiu(player.getColisão(), direção, 1.0f);
		
	  //view.setCenter(player.getPosition()); //Depois do atualizaaaa

		window.clear(sf::Color (150, 150, 150));
		player.Desenha(window);

		for (Plataforma& plataforma : plataformas)
		{
			plataforma.Desenha(window);
		}
		//plat1.Desenha(window);

		//window.setView(view);
		window.display();

	}

	return 0;
}

/*void ResizeView(const sf::RenderWindow& window, sf::View& view)
{
	float proporção = (float) window.getSize().x / (float)window.getSize().y;
	view.setSize(VIEW_HEIGHT * proporção, VIEW_HEIGHT);
}*/