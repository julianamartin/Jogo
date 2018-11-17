#include "pch.h"
#include "Conta.h"


Conta::Conta()
{
	quantidade++;
	velocidade.x = 95.0f;
	amplitude = 75.0f;
}


Conta::~Conta()
{
	quantidade--;
}

void Conta::Inicializa()
{
	/*textura.loadFromFile("cerveja.png");
	objP.setTexture(&textura);*/
	objP.setFillColor(Color::Blue);
	objP.setSize(Vector2f(50.0f, 70.0f));
	objP.setOrigin(objP.getSize());

}

void Conta::setPosicao()
{
	Vector2f posicao;
	//setando a posicao
	if (quantidade == 1)
		posicao = Vector2f(260.0f, 330.0f);
	else
	{
		if (quantidade == 2)
			posicao = Vector2f (1230.0f, 180.0f);
		else
		{
			if (quantidade == 3)
				posicao = Vector2f(1545.0f, 510.0f);
			else
			{
				if (quantidade == 4)
					posicao = Vector2f(200.0f, 725.0f);
				else
				{
					if (quantidade == 5)
						posicao = Vector2f(1140.0f, 770.0f);
					else
					{
						if (quantidade == 6)
							posicao = Vector2f(870.0f, 1010.0f);
						else
						{
							if (quantidade == 7)
								posicao = Vector2f(1670.0f, 1010.0f);
						}

					}

				}

			}

		} 
		
	}

	objP.setPosition(posicao);
}

int Conta::quantidade = 0;

