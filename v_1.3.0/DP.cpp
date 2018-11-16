#include "pch.h"
#include "DP.h"


DP::DP()
{
	quantidade++;
	velocidade.x = 50.0f;
}


DP::~DP()
{
}

void DP::Inicializa()
{
	/*textura.loadFromFile("cerveja.png");
	objP.setTexture(&textura);*/
	objP.setSize(sf::Vector2f(50.0f, 70.0f));
	objP.setFillColor(Color::Green);
	objP.setOrigin(objP.getSize() / 2.0f);

} 
void DP::setPosicao()
{
	Vector2f posicao;
	//setando a posicao
	if (quantidade == 1)
		posicao = Vector2f(50.0f, 840.0f);
	else
	{
		if (quantidade == 2)
			posicao = Vector2f(100.0f, 740.0f);
		else
		{
			if (quantidade == 3)
				posicao = Vector2f(150.0f, 640.0f);
			else
			{
				if (quantidade == 4)
					posicao = Vector2f(200.0f, 540.0f);
				else
				{
					if (quantidade == 5)
						posicao = Vector2f(250.0f, 440.0f);
					else
					{
						if (quantidade == 6)
							posicao = Vector2f(300.0f, 340.0f);
						else
						{
							if (quantidade == 7)
								posicao = Vector2f(350.0f, 240.0f);
						}

					}

				}

			}

		}

	}

	objP.setPosition(posicao);
}

void DP::Mover(float deltaTime)
{

}

int DP::quantidade = 0;