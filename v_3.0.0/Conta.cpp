#include "pch.h"
#include "Conta.h"


Conta::Conta()
{
	quantidade++;
	velocidade.x = 95.0f;
	amplitude = 75.0f;
	din = 1.5f;
	temp = 1.0f;
	ID = 4;
}


Conta::~Conta()
{
	quantidade--;
}

void Conta::Inicializa()
{
	textura.loadFromFile("conta.png");
	objP.setTexture(&textura);
	//objP.setFillColor(Color::Blue);
	objP.setSize(Vector2f(50.0f, 70.0f));
	objP.setOrigin(objP.getSize() / 2.0f);

}

void Conta::setPosicao()
{
	Vector2f posicao;
	//setando a posicao
	if (quantidade == 1)
		posicao = Vector2f(260.0f, 290.0f);
	else
	{
		if (quantidade == 2)
			posicao = Vector2f(1230.0f, 140.0f);
		else
		{
			if (quantidade == 3)
				posicao = Vector2f(1545.0f, 470.0f);
			else
			{
				if (quantidade == 4)
					posicao = Vector2f(200.0f, 685.0f);
				else
				{
					if (quantidade == 5)
						posicao = Vector2f(1140.0f, 730.0f);
					else
					{
						if (quantidade == 6)
							posicao = Vector2f(870.0f, 970.0f);
						else
						{
							if (quantidade == 7)
								posicao = Vector2f(1670.0f, 970.0f);
						}

					}

				}

			}

		}

	}

	objP.setPosition(posicao);
}


int Conta::quantidade = 0;

