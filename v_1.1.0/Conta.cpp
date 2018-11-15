#include "pch.h"
#include "Conta.h"


Conta::Conta()
{
	quantidade++;
	velocidade.x = 95.0f;
}


Conta::~Conta()
{
}

void Conta::Inicializa()
{
	Texture textura;
	textura.loadFromFile("cerveja.png");
	objP.setTexture(&textura);
	objP.setSize(Vector2f(50.0f, 70.0f));
	objP.setOrigin(objP.getSize() / 2.0f);

}

void Conta::setPosicao1()
{
	//setando a posicao
	if (quantidade == 1)
		Vector2f posicao(50.0f, 840.0f);
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

void Conta::setPosicao2()
{
	Vector2f posicao;

	//setando a posicao
	if (quantidade == 1)
		posicao = Vector2f(50.0f, 940.0f);
	else
	{
		if (quantidade == 2)
			posicao = Vector2f(100.0f, 940.0f);
		else
		{
			if (quantidade == 3)
				posicao = Vector2f(150.0f, 940.0f);
			else
			{
				if (quantidade == 4)
					posicao = Vector2f(200.0f, 940.0f);
				else
				{
					if (quantidade == 5)
						posicao = Vector2f(250.0f, 940.0f);
					else
					{
						if (quantidade == 6)
							posicao = Vector2f(300.0f, 940.0f);
						else
						{
							if (quantidade == 7)
								posicao = Vector2f(350.0f, 940.0f);
						}

					}

				}

			}

		}

		objP.setPosition(posicao);


	}
}

void Conta::Mover(float deltaTime)
{

}

int Conta::quantidade = 0;

