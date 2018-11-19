#include "pch.h"
#include "Cerveja.h"

Cerveja::Cerveja()
{
	quantidade++;
	tempo = 0.05f;
	dinheiro = 0.05f;
	ID = 3;
}
Cerveja::~Cerveja()
{
	quantidade--;
}
void Cerveja::Inicializa()
{
	textura.loadFromFile("cerveja.png");
	objP.setTexture(&textura);
	objP.setSize(Vector2f(50.0f, 70.0f));
	objP.setOrigin(objP.getSize() / 2.0f);
}
void Cerveja::setPosicao1()
{
	Vector2f posicao;
	//setando a posicao
	if (quantidade == 1)
		posicao = Vector2f(530.0f, 975.0f);
	else
	{
		if (quantidade == 2)
			posicao = Vector2f(385.0f, 685.0f);
		else
		{
			if (quantidade == 3)
				posicao = Vector2f(1450.0f, 975.0f);
			else
			{
				if (quantidade == 4)
					posicao = Vector2f(1630.0f, 145.0f);
				else
				{
					if (quantidade == 5)
						posicao = Vector2f(670.0f, 535.0f);
					else
					{
						if (quantidade == 6)
							posicao = Vector2f(400.0f, 295.0f);
						else
						{
							if (quantidade == 7)
								posicao = Vector2f(1450.0f, 475.0f);
						}

					}

				}

			}

		}

	}
	objP.setPosition(posicao);
}

void Cerveja::setPosicao2()
{
	Vector2f posicao;

	//setando a posicao
	if (quantidade == 1)
		posicao = Vector2f(300.0f, 245.0f);
	else
	{
		if (quantidade == 2)
			posicao = Vector2f(1290.0f, 485.0f);
		else
		{
			if (quantidade == 3)
				posicao = Vector2f(1550.0f, 745.0f);
			else
			{
				if (quantidade == 4)
					posicao = Vector2f(830.0f, 455.0f);
				else
				{
					if (quantidade == 5)
						posicao = Vector2f(1675.0f, 955.0f);
					else
					{
						if (quantidade == 6)
							posicao = Vector2f(1770.0f, 520.0f);
						else
						{
							if (quantidade == 7)
								posicao = Vector2f(1460.0f, 350.0f);
						}

					}

				}

			}

		}

	}

	objP.setPosition(posicao);
}

void Cerveja::setPosicao(Vector2f pos)
{
	posicao = pos;
	objP.setPosition(posicao);
}

int Cerveja::quantidade = 0;