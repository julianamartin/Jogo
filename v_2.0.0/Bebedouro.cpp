#include "pch.h"
#include "Bebedouro.h"


Bebedouro::Bebedouro()
{
	quantidade++;
	energia = 0.05f;
	tempo = 0.15f;
	ID = 2;
}


Bebedouro::~Bebedouro()
{
	quantidade--;
}

void Bebedouro::Inicializa()
{
	textura.loadFromFile("bebedouro.png");
	objP.setTexture(&textura);
	//objP.setFillColor(Color::Cyan);
	objP.setSize(Vector2f(50.0f, 70.0f));
	objP.setOrigin(objP.getSize() / 2.0f);
	
}
void Bebedouro::setPosicao()
{
	Vector2f posicao;
	//setando a posicao
	if (quantidade == 1)
		posicao = Vector2f(150.0f, 250.0f);
	else
	{
		if (quantidade == 2)
			posicao = Vector2f(70.0f, 625.0f);
		else
		{
			if (quantidade == 3)
				posicao = Vector2f(760.0f, 775.0f);
			else
			{
				if (quantidade == 4)
					posicao = Vector2f(610.0f, 955.0f);
				else
				{
					if (quantidade == 5)
						posicao = Vector2f(1880.0f, 225.0f);
					else
					{
						if (quantidade == 6)
							posicao = Vector2f(1875.0f, 525.0f);
						else
						{
							if (quantidade == 7)
								posicao = Vector2f(1520.0f, 485.0f);
						}

					}

				}

			}

		}

	}

	objP.setPosition(posicao);
}

void Bebedouro::setPosicao(Vector2f pos)
{
	posicao = pos;
	objP.setPosition(posicao);
}

int Bebedouro::quantidade = 0;