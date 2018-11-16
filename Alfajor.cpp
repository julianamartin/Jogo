#include "pch.h"
#include "Alfajor.h"


Alfajor::Alfajor()
{
	quantidade++;
	dinheiro = 10.0f;
	energia = 20.0f;
}


Alfajor::~Alfajor()
{
	quantidade--;
}

void Alfajor::Inicializa()
{
	textura.loadFromFile("alfajor.png");
	objP.setSize(sf::Vector2f(60.0f, 70.0f));
	objP.setOrigin(objP.getSize());
	objP.setTexture(&textura);
}
void Alfajor::setPosicao()
{
	Vector2f posicao;
	//setando a posicao
	if (quantidade == 1)
		posicao = Vector2f(860.0f, 290.0f);
	else
	{
		if (quantidade == 2)
			posicao = Vector2f(100.0f, 740.0f);
		else
		{
			if (quantidade == 3)
				posicao = Vector2f(1340.0f, 710.0f);
			else
			{
				if (quantidade == 4)
					posicao = Vector2f(1770.0f, 520.0f);
				else
				{
					if (quantidade == 5)
						posicao = Vector2f(1780.0f, 200.0f);
					else
					{
						if (quantidade == 6)
							posicao = Vector2f(1840.0f, 830.0f);
						else
						{
							if (quantidade == 7)
								posicao = Vector2f(1213.0f, 1030.0f);
						}

					}

				}

			}

		}

	}

	objP.setPosition(posicao);
}

int Alfajor::quantidade = 0;

