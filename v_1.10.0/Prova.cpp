#include "pch.h"
#include "Prova.h"


Prova::Prova()
{
	quantidade++;
	velocidade.x = 90.0f;
	amplitude = 50.0f;
	energia = 5.0f;
	tempo = 1.0f;
}


Prova::~Prova()
{
	quantidade--;
}

void Prova::Inicializa()
{
	/*textura.loadFromFile("cerveja.png");
	//objP.setTexture(&textura);*/
	objP.setFillColor(Color::Red);
	objP.setSize(Vector2f(50.0f, 70.0f));
	objP.setOrigin(objP.getSize());
} 
void Prova::setPosicao1()
{
	Vector2f posicao;
	//setando a posicao
	if (quantidade == 1)
		posicao = Vector2f(90.0f, 340.0f);
	else
	{
		if (quantidade == 2)
			posicao = Vector2f(1415.0f, 180.0f);
		else
		{
			if (quantidade == 3)
				posicao = Vector2f(1670.0f, 810.0f);
			else
			{
				if (quantidade == 4)
					posicao = Vector2f(1805.0f, 1010.0f);
				else
				{
					if (quantidade == 5)
						posicao = Vector2f(690.0f, 1010.0f);
					else
					{
						if (quantidade == 6)
							posicao = Vector2f(780.0f, 610.0f);
						else
						{
							if (quantidade == 7)
								posicao = Vector2f(340.0f, 1010.0f);
						}

					}

				}

			}

		}

	}

	objP.setPosition(posicao);
}

void Prova::setPosicao2()
{
	Vector2f posicao;
	//setando a posicao
	if (quantidade == 1)
		posicao = Vector2f(470.0f, 285.0f);
	else
	{
		if (quantidade == 2)
			posicao = Vector2f(675.0f, 490.0f);
		else
		{
			if (quantidade == 3)
				posicao = Vector2f(400.0f, 660.0f);
			else
			{
				if (quantidade == 4)
					posicao = Vector2f(1770.0f, 260.0f);
				else
				{
					if (quantidade == 5)
						posicao = Vector2f(1420.0f, 520.0f);
					else
					{
						if (quantidade == 6)
							posicao = Vector2f(1200.0f, 990.0f);
						else
						{
							if (quantidade == 7)
								posicao = Vector2f(210.0f, 660.0f);
						}

					}

				}

			}

		}

	}

	objP.setPosition(posicao);
}

int Prova::quantidade = 0;