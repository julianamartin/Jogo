#include "pch.h"
#include "Prova.h"


Prova::Prova()
{
	quantidade++;
	velocidade.x = 90.0f;
}


Prova::~Prova()
{
}

void Prova::Inicializa()
{
	/*textura.loadFromFile("cerveja.png");
	//objP.setTexture(&textura);*/
	objP.setFillColor(Color::Red);
	objP.setSize(Vector2f(50.0f, 70.0f));
	objP.setOrigin(objP.getSize() / 2.0f);
} 
void Prova::setPosicao1()
{
	Vector2f posicao;
	//setando a posicao
	if (quantidade == 1)
		posicao = Vector2f(200.0f, 840.0f);
	else
	{
		if (quantidade == 2)
			posicao = Vector2f(250.0f, 740.0f);
		else
		{
			if (quantidade == 3)
				posicao = Vector2f(300.0f, 640.0f);
			else
			{
				if (quantidade == 4)
					posicao = Vector2f(350.0f, 540.0f);
				else
				{
					if (quantidade == 5)
						posicao = Vector2f(400.0f, 440.0f);
					else
					{
						if (quantidade == 6)
							posicao = Vector2f(450.0f, 340.0f);
						else
						{
							if (quantidade == 7)
								posicao = Vector2f(500.0f, 240.0f);
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
		posicao = Vector2f(200.0f, 840.0f);
	else
	{
		if (quantidade == 2)
			posicao = Vector2f(250.0f, 740.0f);
		else
		{
			if (quantidade == 3)
				posicao = Vector2f(300.0f, 640.0f);
			else
			{
				if (quantidade == 4)
					posicao = Vector2f(350.0f, 540.0f);
				else
				{
					if (quantidade == 5)
						posicao = Vector2f(400.0f, 440.0f);
					else
					{
						if (quantidade == 6)
							posicao = Vector2f(450.0f, 340.0f);
						else
						{
							if (quantidade == 7)
								posicao = Vector2f(500.0f, 240.0f);
						}

					}

				}

			}

		}

	}

	objP.setPosition(posicao);
}
void Prova::Mover(float deltaTime)
{

}

int Prova::quantidade = 0;