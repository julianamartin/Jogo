#include "pch.h"
#include "Bebedouro.h"


Bebedouro::Bebedouro()
{
	quantidade++;
	energia = 0.0f;
	tempo = 0.0f;
}


Bebedouro::~Bebedouro()
{
	quantidade--;
}

void Bebedouro::Inicializa()
{
	/*textura.loadFromFile("cerveja.png");
	objP.setTexture(&textura);*/
	objP.setFillColor(Color::Cyan);
	objP.setSize(Vector2f(50.0f, 70.0f));
	objP.setOrigin(objP.getSize());
	
}
void Bebedouro::setPosicao()
{
	Vector2f posicao;
	//setando a posicao
	if (quantidade == 1)
		posicao = Vector2f(150.0f, 285.0f);
	else
	{
		if (quantidade == 2)
			posicao = Vector2f(70.0f, 660.0f);
		else
		{
			if (quantidade == 3)
				posicao = Vector2f(760.0f, 810.0f);
			else
			{
				if (quantidade == 4)
					posicao = Vector2f(610.0f, 990.0f);
				else
				{
					if (quantidade == 5)
						posicao = Vector2f(1880.0f, 260.0f);
					else
					{
						if (quantidade == 6)
							posicao = Vector2f(1875.0f, 560.0f);
						else
						{
							if (quantidade == 7)
								posicao = Vector2f(1520.0f, 520.0f);
						}

					}

				}

			}

		}

	}

	objP.setPosition(posicao);
}
int Bebedouro::quantidade = 0;