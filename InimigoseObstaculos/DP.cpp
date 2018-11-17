#include "pch.h"
#include "DP.h"


DP::DP()
{
	quantidade++;
	velocidade.x = 50.0f;
	morre = true;
}


DP::~DP()
{
	quantidade--;
}

void DP::Inicializa()
{
	textura.loadFromFile("DP.png");
	objP.setTexture(&textura);
	objP.setSize(sf::Vector2f(50.0f, 70.0f));
	objP.setOrigin(objP.getSize() / 2.0f);

} 
void DP::setPosicao()
{
	Vector2f posicao;
	//setando a posicao
	if (quantidade == 1)
		posicao = Vector2f(70.0f, 950.0f);
	else
	{
		if (quantidade == 2)
			posicao = Vector2f(800.0f, 950.0f);
		else
		{
			if (quantidade == 3)
				posicao = Vector2f(1470.0f, 950.0f);
			else
			{
				if (quantidade == 4)
					posicao = Vector2f(1850.0f, 950.0f);
				else
				{
					if (quantidade == 5)
						posicao = Vector2f(1650.0f, 210.0f);
					else
					{
						if (quantidade == 6)
							posicao = Vector2f(885.0f, 770.0f);
						else
						{
							if (quantidade == 7)
								posicao = Vector2f(1285.0f, 195.0f);
						}

					}

				}

			}

		}

	}

	objP.setPosition(posicao);
}

int DP::quantidade = 0;